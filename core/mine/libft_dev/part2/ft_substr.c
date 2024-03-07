#include "libft.h"

char* ft_substr(const char* s, unsigned int start, size_t len) {
    if (!s) return NULL;

    size_t s_len = ft_strlen(s);
    if (start >= s_len) return ft_strdup(""); // If start is beyond the string, return an empty string

    // Allocate memory for the substring
    char* substr = malloc(len + 1); // +1 for the null terminator
    if (!substr) return NULL; // If the allocation fails, return NULL

    // Copy the substring into the allocated memory
    size_t i;
    for (i = 0; i < len && s[start + i] != '\0'; ++i) {
        substr[i] = s[start + i];
    }
    substr[i] = '\0'; // Null-terminate the substring

    return substr;
}