#include "libft.h"

void*	ft_memcpy(void*	dataTo, const void*	dataFrom, size_t	numberOfBytesToSet)
{
	unsigned char* byteLevelDataTo;
	const unsigned char* byteLevelDataFrom;

	while (numberOfBytesToSet--)
	{
		*byteLevelDataTo = byteLevelDataFrom;
	}
	return dataTo;
}