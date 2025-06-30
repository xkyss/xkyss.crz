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
#ifndef DEMO03_API
#  ifdef _WIN32
#     if defined(DEMO03_BUILD_SHARED) /* build dll */
#         define DEMO03_API __declspec(dllexport)
#     elif !defined(DEMO03_BUILD_STATIC) /* use dll */
#         define DEMO03_API __declspec(dllimport)
#     else /* static library */
#         define DEMO03_API
#     endif
#  else
#     if __GNUC__ >= 4
#         define DEMO03_API __attribute__((visibility("default")))
#     else
#         define DEMO03_API
#     endif
#  endif
#endif

    // ---------------
    // Version
#define DEMO03_VERSION_MAJOR 1
#define DEMO03_VERSION_MINOR 0
#define DEMO03_VERSION ((DEMO03_VERSION_MAJOR << 16) | DEMO03_VERSION_MINOR)


    DEMO03_API unsigned int demo03_get_version();


    // ---------------
    // Paper
    struct demo03_paper_s;
    typedef struct demo03_paper_s demo03_paper_t;

    DEMO03_API demo03_paper_t *demo03_paper_new(void);
    DEMO03_API demo03_paper_t *demo03_paper_new_with_int(int i);
    DEMO03_API void demo03_paper_delete(demo03_paper_t *paper);
    DEMO03_API void demo03_paper_foo01(demo03_paper_t *paper);
    DEMO03_API int demo03_paper_foo02(demo03_paper_t *paper);

#ifdef __cplusplus
}
#endif
#endif //DEMO3_H
