//
// Created by dev88 on 2025/6/30.
//

#ifndef DEMO04_H
#define DEMO04_H

namespace demo04 {

class Paper {
public:
    Paper();
    explicit Paper(int i);
    ~Paper();

public:
    void foo01() const;
    int foo02() const;

private:
    int m = 0;
};

}

#endif //DEMO04_H
