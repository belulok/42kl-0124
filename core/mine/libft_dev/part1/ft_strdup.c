#include "libft.h"

char* my_strdup(const char* s) {
    size_t len = strlen(s) + 1;
    char* newStr = malloc(len);
    if (newStr) {
        strcpy(newStr, s);
    }
    return newStr;
}