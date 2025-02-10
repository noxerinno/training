#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>

static unsigned int CompileShader(unsigned int type, const std::string& source) {
    unsigned int id = glCreateShader(type);
    const char* src = source.c_str();
    
    glShaderSource(id, 1, &src, nullptr);
    glCompileShader(id);

    /* Compilation error handeling */
    int compilStatus;
    glGetShaderiv(id, GL_COMPILE_STATUS, &compilStatus);                                // Retreiving compilation status

    if (compilStatus == GL_FALSE) {                                                     // If compilation failed
        int errMessageLength;
        glGetShaderiv(id, GL_INFO_LOG_LENGTH, &errMessageLength);                       // We retreive the error message length,
        char errMessage[errMessageLength];                                              // create a var for the error message
        glGetShaderInfoLog(id, errMessageLength, &errMessageLength, errMessage);        // and retreive the error message itself
        
        std::cout << "Failed to compile" << (type == GL_VERTEX_SHADER ? "vertex" : "fragment") << "shader !" << std::endl;
        std::cout << errMessage << std::endl;

        glDeleteShader(id);
        return 0;
    }

    return id;
}

static unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader) {
    unsigned int program = glCreateProgram();
    unsigned int vs = CompileShader(GL_VERTEX_SHADER, vertexShader);    
    unsigned int fs = CompileShader(GL_FRAGMENT_SHADER, fragmentShader);

    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);
    glValidateProgram(program);

    glDeleteShader(vs);
    glDeleteShader(fs);
    
    return program;
}

int main(void) {
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
   
    /* Initialize GLEW */
    glewExperimental = GL_TRUE;  // Permet d'utiliser les extensions modernes
    if (glewInit() != GLEW_OK) {
        std::cerr << "Erreur lors de l'initialisation de GLEW" << std::endl;
        return -1;
    }

    /* Print OpenGl version*/
    std::cout << glGetString(GL_VERSION) << std::endl;

    /* Buffer data and spec to draw a triangle*/
    float positions[6] = {
        -0.5f, -0.5f,
         0.0f,  0.5f,
         0.5f, -0.5f,
    };

    unsigned int buffer;
    glGenBuffers(1, &buffer);                                                       // Create buffer
    glBindBuffer(GL_ARRAY_BUFFER, buffer);                                          // "Select" my buffer as the current buffer
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), positions, GL_STATIC_DRAW);    // Add my vertices' data to the buffer

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);           // Describe my vertices' attribute

    /* Writing shader source */
    std::string vertexShader = 
        "#version 460 core\n"
        "\n"
        "layout(location = 0) in vec4 position;"
        "\n"
        "void main() {\n"
        " gl_Position = position;\n"
        "}\n";

     std::string fragmentShader = 
        "#version 460 core\n"
        "\n"
        "layout(location = 0) out vec4 color;"
        "\n"
        "void main() {\n"
        " color = vec4(1.0, 0.0, 0.0, 1.0);\n"
        "}\n";

    unsigned int shader = CreateShader(vertexShader, fragmentShader);   // Call to create function from shader source
    glUseProgram(shader);                                               // Bind shader

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window)) {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        // glBegin(GL_TRIANGLES);
        // glVertex2f(-0.5f, -0.5f);
        // glVertex2f(0.0f, 0.5f);
        // glVertex2f(0.5f, -0.5f);
        // glEnd();

        glDrawArrays(GL_TRIANGLES, 0, 3);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glDeleteShader(shader);                                             // Clear shader

    glfwTerminate();
    return 0;
}
