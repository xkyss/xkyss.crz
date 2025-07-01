#include <iostream>
#include "Paper.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    const auto p = new demo03::Paper();
    p->foo01();
    return 0;
}