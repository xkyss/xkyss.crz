//
// Created by dev88 on 2025/6/30.
//

#include "demo3.h"
#include "Paper.h"

#define AS_TYPE(Type, Obj) reinterpret_cast<Type *>(Obj)
#define AS_CTYPE(Type, Obj) reinterpret_cast<const Type *>(Obj)

#ifdef __cplusplus
extern "C" {
#endif

DEMO03_API unsigned int demo03_get_version(void)
{
    return DEMO03_VERSION;
}

demo03_paper_t * demo03_paper_new(void) {
    return AS_TYPE(demo03_paper_t, new demo03::Paper());
}

demo03_paper_t * demo03_paper_new_with_int(int i) {
    return AS_TYPE(demo03_paper_t, new demo03::Paper(i));
}

void demo03_paper_delete(demo03_paper_t *paper) {
    if (!paper) {
        return;
    }

    delete AS_TYPE(demo03::Paper, paper);
}

void demo03_paper_foo01(demo03_paper_t *paper) {
    const auto self = AS_TYPE(demo03::Paper, paper);
    self->foo01();
}

int demo03_paper_foo02(demo03_paper_t *paper) {
    const auto self = AS_TYPE(demo03::Paper, paper);
    return self->foo02();
}

#ifdef __cplusplus
}
#endif
