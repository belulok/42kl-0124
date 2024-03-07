#include "libft.h"

// Helper function to check if a char is in the set
static int is_in_set(char c, const char *set) {
    while (*set) {
        if (c == *set++)
            return 1;
    }
    return 0;
}

char* ft_strtrim(char const *s1, char const *set) {
    if (!s1 || !set) return NULL;

    // Find start
    while (*s1 && is_in_set(*s1, set)) s1++;

    // Find end
    const char *end = s1 + strlen(s1) - 1;
    while (end > s1 && is_in_set(*end, set)) end--;
    size_t trim_len = end - s1 + 1;

    // Copy trimmed string
    char *trimmed = (char *)malloc(trim_len + 1);
    if (!trimmed) return NULL;

    strncpy(trimmed, s1, trim_len);
    trimmed[trim_len] = '\0';  // Null-terminate the string

    return trimmed;
}