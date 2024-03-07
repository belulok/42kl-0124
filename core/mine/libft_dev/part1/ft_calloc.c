#include "libft.h"

void* my_calloc(size_t num, size_t size) {
    size_t totalSize = num * size;
    void* ptr = malloc(totalSize);
    if (ptr) {
        memset(ptr, 0, totalSize);
    }
    return ptr;
}