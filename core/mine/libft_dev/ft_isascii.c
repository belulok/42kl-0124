int ft_isascii(int    arg)
{
    if (arg >= 0 && arg <= 128)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}