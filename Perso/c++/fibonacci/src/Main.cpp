#include <iostream>
#include <vector>

#include "fibonacci/Fibonacci.h"

using namespace std;

int main(){
    Fibonacci fib;

    vector<int> fibonacciSequence = fib.getFibonacciSequence(25);

    for (int element : fibonacciSequence) {
        cout << element << ' ';
    }
}
