int ft_isascii(int    argument)
{
    if (argument >= 0 && argument <= 128)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}