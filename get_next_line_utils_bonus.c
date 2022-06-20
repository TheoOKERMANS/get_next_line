#include "get_next_line_bonus.h"

char	*ft_calloc(size_t count, size_t size)
{
	char			*res;
	void			*temp;
	unsigned int	i;

	res = malloc(size * count);
	if (res == NULL)
		return (NULL);
	temp = res;
	i = 0;
	while (i < count * size)
	{
		*((char *)temp++) = 0;
		i++;
	}
	return (res);
}

int	backline_in_str(char *str)
{
	if (str)
	{
		while (*str)
		{
			if (*str == '\n')
				return (1);
			str++;
		}
	}
	return (0);
}

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (str)
	{
		while (*str)
		{
			len++;
			str++;
		}
	}
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	size;
	char	*res;

	size = 0;
	size += ft_strlen(s1);
	size += ft_strlen(s2);
	res = ft_calloc(size + 1, sizeof(char));
	size = 0;
	if (s1)
	{
		while (s1[size])
		{
			res[size] = s1[size];
			size++;
		}
	}
	if (s2)
	{
		while (*s2)
		{
			res[size++] = *s2++;
		}
	}
	free(s1);
	return (res);
}
