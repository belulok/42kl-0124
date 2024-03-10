#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t needle_len;
    size_t  i;

    if (!*needle)
    {
        return (char *)haystack;
    }

    needle_len = ft_strlen(needle);
    i = 0;
    while (i <= n - needle_len)
    {
        if (haystack[i] == *needle && ft_strncmp(haystack + i, needle, needle_len) == 0)
        {
            return ((char *)(haystack + i));
        }
        ++i;
    }

    return (NULL);
}