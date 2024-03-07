#include "libft.h"

size_t ft_strlcpy(char* dataTo, const char* dataFrom, size_t dataToBufferSize)
{
    size_t lengthOfString = ft_strlen(dataFrom);
    if (dataToBufferSize == 0) {
        return lengthOfString;
    }

    size_t i = 0;
    while (i < dataToBufferSize - 1 && dataFrom[i] != '\0') {
        dataTo[i] = dataFrom[i];
        i++;
    }

    dataTo[i] = '\0';

    return lengthOfString;
}