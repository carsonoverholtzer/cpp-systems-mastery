#include <iostream>
#include <cstdlib>

int main() {
    int* ptr = (int*)std::malloc(sizeof(int));
    *ptr = 42;

    std::cout << "Manual allocated value: " << *ptr << std::endl;

    std::free(ptr);
    return 0;
}
