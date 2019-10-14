#include "libft.h"
#include <stdio.h>

void print_string_array(char **strs)
{
	int i = 0;
	if (!strs)
	{
		printf("(null)\n");
		return ;
	}
	while (strs[i++]);
	printf("%d string(s):\n", i - 1);
	i = 0;
	while (strs[i])
		printf("--> %s\n", strs[i++]);
}

char map(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (ft_toupper(c));
	return (ft_tolower(c));
}

int main()
{
	printf("*** Tests Part 2 functions***\n");

	printf("\n** ft_substr\n");
	printf("'Hello world', 3, 5: %s\n", ft_substr("Hello world", 3, 5));
	printf("'Hello world', -1, 100: %s\n", ft_substr("Hello world", -1, 100));
	printf("NULL, 3, 5: %s\n", ft_substr(NULL, 3, 5));

	printf("\n** ft_strjoin\n");
	printf("'Hello ', 'World': %s\n", ft_strjoin("Hello ", "World"));
	printf("NULL, NULL: %s\n", ft_strjoin(NULL, NULL));
	printf("NULL, 'World': %s\n", ft_strjoin(NULL, "World"));

	printf("\n** ft_strtrim\n");
	printf("'   hello,  world   ,, ', ' ,': %s\n", ft_strtrim("   hello,  world   ,, ", " ,"));
	printf("'   hello,  world   ,, ', NULL: %s\n", ft_strtrim("   hello,  world   ,, ", NULL));
	printf("'', '': %s\n", ft_strtrim("", ""));
	printf("NULL, '': %s\n", ft_strtrim(NULL, ""));

	printf("\n** ft_slit\n");
	printf("'Hello world ?', ' ': \n");
	print_string_array(ft_split("Hello world ?", ' '));
	printf("'Hello world ?', '\\0': \n");
	print_string_array(ft_split("Hello world ?", '\0'));
	printf("NULL, ' ': \n");
	print_string_array(ft_split(NULL, ' '));

	printf("\n** ft_itoa\n");
	printf("15: %s\n", ft_itoa(15));
	printf("-15: %s\n", ft_itoa(-15));
	printf("0: %s\n", ft_itoa(0));
	printf("-2147483648: %s\n", ft_itoa(-2147483648));

	printf("\n** ft_strmapi\n");
	printf("'Hello World': %s\n", ft_strmapi("Hello World", &map));
	printf("'Hello World', NULL: %s\n", ft_strmapi("Hello World", NULL));
	printf("NULL: %s\n", ft_strmapi(NULL, &map));

}
