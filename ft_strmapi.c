#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int	len;
	int	i;

	len = ft_strlen(s);
	res = ft_calloc(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
