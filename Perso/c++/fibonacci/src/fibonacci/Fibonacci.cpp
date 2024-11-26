#include "Fibonacci.h"
#include <cstddef>
#include <cstdlib>

using namespace std;

vector<int> result;

Fibonacci::Fibonacci() {}

vector<int> Fibonacci::getFibonacciSequence(int size) {
    for (int i = 0; i < size; i++) {
        result.insert(result.end(), recursiveFibonacci(i));
    }

    return result;
}

int Fibonacci::recursiveFibonacci(int index) {
    // Recursion's base case
    if (index < 2) {
        return index;
    }

    return recursiveFibonacci(index - 1) + recursiveFibonacci(index - 2);
}
