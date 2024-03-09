#include "libft.h"

void	ft_bzero(void*	pointers, size_t	numberOfBytesToSetToZero)
{
	unsigned char* byteLevelPointers;

	byteLevelPointers = pointers;
	while (numberOfBytesToSetToZero--)
	{
		*byteLevelPointers = 0;
	}
	
}