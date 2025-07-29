#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>
#include <unordered_map>

class Fibonacci {
    public:
        Fibonacci();
        std::vector<long> getFibonacciSequence(int size);
        std::vector<long> getFibonacciSequence(int size, int mode);
    private:
        long recursiveFibonacci(int index);
        long dynamicFibonacci(int index, std::unordered_map<int, long> &alreadyCalculatedIndex);
    protected:
};

#endif // !FIBONACCI_H
