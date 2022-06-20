#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_calloc(size_t count, size_t size);
int		backline_in_str(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif