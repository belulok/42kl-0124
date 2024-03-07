#include "libft.h"

void*	ft_memset(void*	pointers, int	desiredValue, size_t	numberOfBytesToSet)
{
	unsigned char*	byteLevelPointers;

	byteLevelPointers = pointers;
	while(numberOfBytesToSet--)
	{
		*byteLevelPointers++ = (unsigned char)desiredValue;
	}
	return pointers;
}