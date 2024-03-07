#include "libft.h"

void* ft_memmove(void* dataTo, const void* dataFrom, size_t numberOfBytesToSet)
{
    unsigned char* byteLevelDataTo = dataTo;
    const unsigned char* byteLevelDataFrom = dataFrom;

    if (byteLevelDataTo < byteLevelDataFrom) {
        size_t i = 0;
        while (i < numberOfBytesToSet) {
            byteLevelDataTo[i] = byteLevelDataFrom[i];
            i++;
        }
    } else {
        while (numberOfBytesToSet--) {
            byteLevelDataTo[numberOfBytesToSet] = byteLevelDataFrom[numberOfBytesToSet];
        }
    }

    return dataTo;
}