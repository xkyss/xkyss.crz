//
// Created by dev88 on 2025/6/30.
//

#ifndef DEMO3_H
#define DEMO3_H

#ifdef __cplusplus
extern "C" {
#endif

    // ---------------
    // API
#ifndef DEMO04_API
#  ifdef _WIN32
#     if defined(DEMO04_BUILD_SHARED) /* build dll */
#         define DEMO04_API __declspec(dllexport)
#     elif !defined(DEMO04_BUILD_STATIC) /* use dll */
#         define DEMO04_API __declspec(dllimport)
#     else /* static library */
#         define DEMO04_API
#     endif
#  else
#     if __GNUC__ >= 4
#         define DEMO04_API __attribute__((visibility("default")))
#     else
#         define DEMO04_API
#     endif
#  endif
#endif

    // ---------------
    // Version
#define DEMO04_VERSION_MAJOR 1
#define DEMO04_VERSION_MINOR 0
#define DEMO04_VERSION ((DEMO04_VERSION_MAJOR << 16) | DEMO04_VERSION_MINOR)


    DEMO04_API unsigned int demo04_get_version();


    // ---------------
    // Paper
    struct demo04_paper_s;
    typedef struct demo04_paper_s demo04_paper_t;

    DEMO04_API demo04_paper_t *demo04_paper_new(void);
    DEMO04_API demo04_paper_t *demo04_paper_new_with_int(int i);
    DEMO04_API void demo04_paper_delete(demo04_paper_t *paper);
    DEMO04_API void demo04_paper_foo01(demo04_paper_t *paper);
    DEMO04_API int demo04_paper_foo02(demo04_paper_t *paper);

#ifdef __cplusplus
}
#endif
#endif //DEMO3_H
