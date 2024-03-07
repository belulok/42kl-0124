#include "libft.h"

size_t ft_strlcat(char* dataTo, const char* dataFrom, size_t dataToBufferSize)
{
    size_t dataToLength = ft_strlen(dataTo);
    size_t dataFromLength = ft_strlen(dataFrom);
    size_t totalLength = dataToLength + dataFromLength;

    if (dataToBufferSize <= dataToLength) {
        return totalLength;
    }

    size_t i = dataToLength;
    while (*dataFrom != '\0' && i < dataToBufferSize - 1) {
        dataTo[i] = *dataFrom;
        i++;
        dataFrom++;
    }

    dataTo[i] = '\0';

    return totalLength;
}