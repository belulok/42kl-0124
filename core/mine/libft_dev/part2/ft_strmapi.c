#include "libft.h"

char* ft_strmapi(char const* s, char (*f)(unsigned int, char)) {
    if (!s || !f) return NULL;

    size_t len = strlen(s);
    char* newStr = malloc(len + 1); // +1 for the null terminator
    if (!newStr) return NULL;

    size_t i = 0;
    while (i < len) {
        newStr[i] = f(i, s[i]);
        i++;
    }
    newStr[i] = '\0';  // Null-terminate the new string

    return newStr;
}