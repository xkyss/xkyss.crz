//
// Created by dev88 on 2025/6/30.
//

#include "Paper.h"

#include <iostream>

namespace demo04 {
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
        std::cout << m + 2 << std::endl;
        return m + 2;
    }
}
