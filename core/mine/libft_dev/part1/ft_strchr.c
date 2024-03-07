char* ft_strchr(const char* string, int firstOccurenceOfCharacter)
{
    while (*string != '\0')
	{
        if (*string == firstOccurenceOfCharacter)
		{
            return (char*)string;
        }
        string++;
    }
    return NULL;
}