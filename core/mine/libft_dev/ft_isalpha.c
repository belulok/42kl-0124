int ft_isalpha(char character)
{
    if(character >= 'A' && character <= 'Z')
    {
        return 1;
    }
    else if(character >= 'a' && character <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}