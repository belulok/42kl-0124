#include "libft.h"

size_t  ft_strlen(char  *str)
{
    size_t  length;

    length = 0;
    while(str[length] != '\0'){
        length++;   
    }
    return length;
}