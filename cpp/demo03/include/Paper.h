//
// Created by dev88 on 2025/6/30.
//

#ifndef DEMO03_H
#define DEMO03_H

namespace demo03 {

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

#endif //DEMO03_H
