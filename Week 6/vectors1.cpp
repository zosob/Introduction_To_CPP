#include <iostream>
#include <vector>
#include <concepts>

// Concept: restrict to arithmetic types
template<typename T>
concept Numeric = std::is_arithmetic_v<T>;

// Function that prints numeric vectors
template<Numeric T>
void printVector(const std::vector<T>& vec) {
    for (const T& val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> intVec = {1, 2, 3};
    std::vector<double> doubleVec = {1.1, 2.2, 3.3};

    std::cout << "Integer vector: ";
    printVector(intVec);

    std::cout << "Double vector: ";
    printVector(doubleVec);

    return 0;
}