#include <iostream>

int main() {
    int stackVar = 10;
    int* heapVar = new int(20);

    std::cout << "Stack value: " << stackVar << std::endl;
    std::cout << "Heap value: " << *heapVar << std::endl;

    delete heapVar;
    return 0;
}
