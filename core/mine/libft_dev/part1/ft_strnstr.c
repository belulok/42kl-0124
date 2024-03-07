#include "libft.h"

char* ft_strnstr(const char* haystack, const char* needle, size_t n) {
    if (!*needle) {
        return (char*)haystack;
    }

    size_t needle_len = ft_strlen(needle);
    for (size_t i = 0; i <= n - needle_len; ++i) {
        if (haystack[i] == *needle && ft_strncmp(haystack + i, needle, needle_len) == 0) {
            return (char*)(haystack + i);
        }
    }

    return NULL;
}