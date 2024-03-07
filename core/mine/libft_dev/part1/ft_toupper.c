char ft_toupper(char character) {
    if (character >= 'a' && character <= 'z') {
        return character - 'a' + 'A';
    }
    return character;
}