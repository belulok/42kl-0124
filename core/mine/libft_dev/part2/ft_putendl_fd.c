#include "libft.h"

void ft_putendl_fd(char *s, int fd) {
    ft_putstr_fd(s, fd);  // Reuse ft_putstr_fd to write the string
    write(fd, "\n", 1);   // Then write the newline character
}