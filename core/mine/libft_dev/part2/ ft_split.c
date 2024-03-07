#include "libft.h"

// Helper function to count words
static size_t word_count(const char *s, char c) {
    size_t count = 0;
    while (*s) {
        while (*s == c) s++; // Skip delimiters
        if (*s != c && *s != '\0') {
            count++;
            while (*s != c && *s != '\0') s++; // Skip non-delimiters
        }
    }
    return count;
}

char** ft_split(char const *s, char c) {
    if (!s) return NULL;

    size_t words = word_count(s, c);
    char **split = (char **)malloc(sizeof(char *) * (words + 1));
    if (!split) return NULL;

    size_t i = 0;
    while (i < words) {
        while (*s == c) s++; // Skip delimiters
        const char *word_start = s;
        while (*s != c && *s != '\0') s++; // Find end of the word

        size_t word_len = s - word_start;
        split[i] = (char *)malloc(word_len + 1);
        if (!split[i]) { // Handle allocation failure
            // Free previously allocated strings
            while (i > 0) {
                free(split[--i]);
            }
            free(split);
            return NULL;
        }

        strncpy(split[i], word_start, word_len);
        split[i][word_len] = '\0'; // Null-terminate the string
        i++;
    }

    split[words] = NULL; // Null-terminate the array
    return split;
}