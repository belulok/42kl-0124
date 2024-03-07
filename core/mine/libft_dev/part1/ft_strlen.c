#include "libft.h"

size_t  ft_strlen(char  *string)
{
    size_t  length;

    length = 0;
    while(string[length] != '\0'){
        length++;   
    }
    return length;
}