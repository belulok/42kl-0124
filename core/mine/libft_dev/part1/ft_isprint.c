int ft_isprint(int  argument)
{
    if(argument >= 32 && argument <= 126)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}