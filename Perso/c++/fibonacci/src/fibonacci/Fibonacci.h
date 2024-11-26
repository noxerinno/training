#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>
#include <unordered_map>

class Fibonacci {
    public:
        Fibonacci();
        std::vector<int> getFibonacciSequence(int size);
        std::vector<int> getFibonacciSequence(int size, int mode);
    private:
        long recursiveFibonacci(int index);
        long dynamicFibonacci(int index, std::unordered_map<int, long> &alreadyCalculatedIndex);
    protected:
};

#endif // !FIBONACCI_H
