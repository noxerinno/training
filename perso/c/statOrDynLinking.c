#include <stdio.h>

int a = 5;

int func() {
    return a;
}

void main(char* argv, int argc) {
    int a = 10;

    printf("%d", func());
}
