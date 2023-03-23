#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned int	i;

	ptr_dst = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = '\0';
		i++;
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}

static int	check_split_words(const char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (s[i + 1] == c && s[i + 1] != '\0')
			{
			}
			else
			{
				counter++;
			}
		}
		i++;
	}
	if (s[ft_strlen((char *)s) - 1] == c)
	{
		counter--;
	}
	return (counter);
}

static char	*get_alloc_word(const char *s, char c)
{
	int		i;
	int		tmp;
	char	*str;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	tmp = i;
	i = 0;
	while (i < tmp)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*get_next_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != '\0' && s[i] == c)
			{
				i++;
			}
			break ;
		}
		i++;
	}
	return ((char *)s + i);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	char		*curr_pos;
	char		**arr;

	i = 0;
	if (s[i] == c)
		curr_pos = get_next_word((char *)s, c);
	else
		curr_pos = (char *)s;
	arr = ft_calloc(check_split_words(s, c) + 1, sizeof(char *));
	if (arr == NULL)
		return (free(arr), NULL);
	while (i < check_split_words(s, c))
	{
		arr[i] = get_alloc_word(curr_pos, c);
		curr_pos = get_next_word(curr_pos, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

int	main(void)
{
	char **arr = ft_split(" hj  ", ' ');
	printf("%s\n", arr[1]);
	return (0);
}
