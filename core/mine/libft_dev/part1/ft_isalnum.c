int ft_isalnum(char character)
{
    if((character >= 'A' && character <= 'Z')
        || (character >= 'a' && character <= 'z'))
    {
       return 1; 
    }
    else if(character >= '0' && character <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }  
}