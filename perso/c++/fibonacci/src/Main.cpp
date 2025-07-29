#include <chrono>
#include <iostream>
#include <vector>

#include "fibonacci/Fibonacci.hpp"

using namespace std;

int main(){
    using chrono::high_resolution_clock;
    using chrono::duration;

    Fibonacci fib;
    int sequenceSize = 48;
    vector<long> fibonacciSequence;

    // Recursive Fibonacci
    auto recursiveFibBegin = high_resolution_clock::now();
    fibonacciSequence = fib.getFibonacciSequence(sequenceSize, 1);
    auto recursiveFibEnd = high_resolution_clock::now();

    duration<double, milli> recursiveFibDuration = recursiveFibEnd - recursiveFibBegin;
    cout << "It took " << recursiveFibDuration.count() << "ms to calculate recursively " << sequenceSize << " Fibonacci numbers." << endl; 

    // Dynamic programming Fibonacci
    auto dynamicProgFibBegin = high_resolution_clock::now();
    fibonacciSequence = fib.getFibonacciSequence(sequenceSize, 0);
    auto dynamicProgFibEnd = high_resolution_clock::now();

    duration<double, milli> dynamicProgFibDuration = dynamicProgFibEnd - dynamicProgFibBegin;
    cout << "It took " << dynamicProgFibDuration.count() << "ms to calculate dynamicaly " << sequenceSize << " Fibonacci numbers." << endl;

    for (int element : fibonacciSequence) {
        cout << element << ' ';
    }
}
