#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>

class Fibonacci {
    public:
        Fibonacci();
        std::vector<int> getFibonacciSequence(int size);
    private:
        int recursiveFibonacci(int index);
    protected:
};

#endif // !FIBONACCI_H
