//
// Created by dev88 on 2025/6/30.
//

#include "demo04.h"
#include "Paper.h"

#define AS_TYPE(Type, Obj) reinterpret_cast<Type *>(Obj)
#define AS_CTYPE(Type, Obj) reinterpret_cast<const Type *>(Obj)

#ifdef __cplusplus
extern "C" {
#endif

DEMO04_API unsigned int demo04_get_version(void)
{
    return DEMO04_VERSION;
}

demo04_paper_t * demo04_paper_new(void) {
    return AS_TYPE(demo04_paper_t, new demo04::Paper());
}

demo04_paper_t * demo04_paper_new_with_int(int i) {
    return AS_TYPE(demo04_paper_t, new demo04::Paper(i));
}

void demo04_paper_delete(demo04_paper_t *paper) {
    if (!paper) {
        return;
    }

    delete AS_TYPE(demo04::Paper, paper);
}

void demo04_paper_foo01(demo04_paper_t *paper) {
    const auto self = AS_TYPE(demo04::Paper, paper);
    self->foo01();
}

int demo04_paper_foo02(demo04_paper_t *paper) {
    const auto self = AS_TYPE(demo04::Paper, paper);
    return self->foo02();
}

#ifdef __cplusplus
}
#endif
