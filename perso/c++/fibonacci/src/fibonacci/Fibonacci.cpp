#include "Fibonacci.hpp"

using namespace std;

Fibonacci::Fibonacci() {}

vector<long> Fibonacci::getFibonacciSequence(int size) {
    return getFibonacciSequence(size, 0);
}

vector<long> Fibonacci::getFibonacciSequence(int size, int mode) {
    vector<long> result;

    if (mode == 0) {
        unordered_map<int, long> alreadyCalculatedIndex;

        for (int i = 0; i < size; i++) {
            result.insert(result.end(), dynamicFibonacci(i, alreadyCalculatedIndex));
        }
        return result;
    } 
    
    for (int i = 0; i < size; i++) {
        result.insert(result.end(), recursiveFibonacci(i));
    }

    return result;
}

long Fibonacci::recursiveFibonacci(int index) {
    // Recursion's base case
    if (index < 2) {
        return index;
    }

    return recursiveFibonacci(index - 1) + recursiveFibonacci(index - 2);
}

long Fibonacci::dynamicFibonacci(int index, unordered_map<int, long> &alreadyCalculatedIndex) {
    // Recursion's base case
    if (index < 2) {
        return index;
    }

    // If the index is already calculated we return it 
    if (alreadyCalculatedIndex.find(index) != alreadyCalculatedIndex.end()) {
        return alreadyCalculatedIndex[index];
    }

    // Otherwise we calculate it
    alreadyCalculatedIndex[index] = dynamicFibonacci(index - 1, alreadyCalculatedIndex) + dynamicFibonacci(index - 2, alreadyCalculatedIndex);
    return alreadyCalculatedIndex[index];
}
