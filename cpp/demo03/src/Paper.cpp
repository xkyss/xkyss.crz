//
// Created by dev88 on 2025/6/30.
//

#include "../include/Paper.h"

#include <iostream>

namespace demo03 {
    Paper::Paper()
        :Paper(0)
    {
    }

    Paper::Paper(int i)
        :m(i)
    {
    }

    Paper::~Paper() = default;

    void Paper::foo01() const {
        std::cout << m << std::endl;
    }

    int Paper::foo02() const {
        std::cout << m << std::endl;
        return m + 2;
    }
}
