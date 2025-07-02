#include <iostream>
//#include "Paper.h"
#include "demo04.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    //const auto p = new demo04::Paper();
    //p->foo01();

    unsigned int version = demo04_get_version();
    std::cout << "version: " << version << std::endl;

    demo04_paper_t* p2 = demo04_paper_new();
    demo04_paper_foo02(p2);

    demo04_paper_delete(p2);
    return 0;
}