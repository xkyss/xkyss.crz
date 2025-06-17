#include "fmt/format.h"

int main() {
    auto lang = "C++";
    fmt::print("Hello and welcome to {}!\n", lang);

    for (int i = 1; i <= 5; i++) {
        fmt::print("i={}\n", i);
    }

    return 0;
}