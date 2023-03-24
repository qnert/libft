#include <stdio.h>
#include "libft.h"

int main(void)
{
	char	*s;

	s = ft_substr("1", 42, 42000000);
	printf("%s\n", s);
	free (s);
	return (0);
}
