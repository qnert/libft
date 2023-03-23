#include <stdio.h>
#include "libft.h"

static int	check_front(const char *s, const char *set)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(set, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	check_back(const char *s, const char *set)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen((char *)s) - 1;
	while (len >= 0)
	{
		if (ft_strchr(set, s[len]) == 0)
			break ;
		i++;
		len--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	cpy_len;

	start = check_front(s1, set);
	cpy_len = ft_strlen((char *)s1) - check_back(s1, set) - start;
	if (start >= cpy_len)
		cpy_len = 0;
	return (ft_substr(s1, start, cpy_len));
}

int main(void)
{
	char	*s;

	s = ft_strtrim("abcdba", "acb");
	printf("%s\n", s);
	return (0);
}
