char ft_tolower(char character) {
    if (character >= 'A' && character <= 'Z') {
        return character - 'A' + 'a';
    }
    return character;
}