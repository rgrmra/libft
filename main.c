#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char	*ft_print_status(int should, int is)
{
	if (should == is)
		return ("\033[1;32mOK\033[1;0m");
	else
		return ("\033[1;31mFAIL\033[1;0m");
}

void	ft_test_is(char *name, int (*t)(int), int (*y)(int))
{
	int c = 0;
	int i = 0;
	int n = 0;

	printf("Test: \033[1;33m%s\n", name);
	while (c < 130)
	{
		if ((*t)(c) > 0)
			n++;
		c++;
	}
	c = 0;
	while (c < 130)
	{
		if ((*y)(c) > 0)
		{
			printf("\033[1;32m%c", c++);
			i++;
		}
		else
			printf("\033[1;31m%c" , c++);
	}
	printf("\033[1;0m\nTest: %s finished\nStatus: %s\n\n", name, ft_print_status(n, i));
}

void	ft_test_to(char *name, int (*t)(int), int (*y)(int))
{
	int c = 0;
	int i = 0;
	int n = 0;

	printf("Test: \033[1;33m%s\n", name);
	while (c < 130)
	{
		if ((*t)(c) != c)
			n++;
		c++;
	}
	c = 0;
	while (c < 130)
	{
		if ((*y)(c) != c)
		{
			printf("\033[1;32m%c", c++);
			i++;
		}
		else
			printf("\033[1;31m%c" , c++);
	}
	printf("\033[1;0m\nTest: %s finished\nStatus: %s\n\n", name, ft_print_status(n, i));
}

void	ft_strlen_test(unsigned long (*t)(const char *), unsigned long (*y)(const char *))
{
	int	i = 0;
	char *name = "ft_strlen";
	char *str = "teste";
	char *str1 = "";
	int result = 0;

	printf("test: \033[1;33m%s\033[1;0m\n", name);
	i = (*y)(str);
	result = (*t)(str);
	printf("The string \"%s\" conted %d and the result should be %d.", str, i, result);
	printf("\033[1;0m\nStatus: %s\n\n", ft_print_status(result, i));
	i = (*y)(str1);
	result = (*t)(str1);
	printf("The string \"%s\" conted %d and the result should be %d.", str1, i, result);
	printf("\033[1;0m\nStatus: %s\n\n", ft_print_status(result, i));
}

void	ft_memset_test(void *(*t)(void *, int, size_t), void *(*y)(void *, int, size_t))
{
	char *name = "ft_memset";
	void *str[20] = { };
	void *str1[20] = { };
	int	status = 0;

	printf("test: \033[1;33m%s\033[1;0m\n", name);
	
	if (strcmp((char *) (*t)(str, 'm', 10), (char *) (*y)(str1, 'm', 10)) == 0)
	{
		printf("\033[1;32mmemset:\t\t%s\nft_memset:\t%s", (char *) str, (char *) str1);
	}
	else
	{
		printf("\033[1;31mmemset:\t\t%s\nft_memset:\t%s", (char *) str, (char *) str1);
		status++;
	}	
		printf("\033[1;0m\nStatus: %s\n\n", ft_print_status(0, status));
}

void	ft_bzero_test(void (*t)(void *, size_t), void (*y)(void *, size_t))
{
	char *name = "ft_bzero";
	void *str[20] = { "hello, world!" };
	void *str1[20] = { "hello, world!" };
	int	status = 0;
	int i = 0;

	printf("test: \033[1;33m%s\033[1;0m\n", name);

	memset(str, 'm', 10);
	memset(str1, 'm', 10);
	printf("\033[1;32mmemset:\t\t%s\nft_memset:\t%s\n", (char *) str, (char *) str1);

	(*t)(str, 5);
	(*y)(str1, 5);
	if (str[0] == 0 && str1[0] == 0 && str[4] == 0 && str1[4] == 0)
		printf("\033[1;32mmemset:\t\t%s\nft_memset:\t%s\n", (char *) str, (char *) str1);
	else
	{
		printf("\033[1;31mmemset:\t\t%s\nft_memset:\t%s\n", (char *) str, (char *) str1);
		status++;
	}
	printf("\033[1;32mbzero:\t\t%s\nft_bzero:\t%s", (char *) str, (char *) str1);
	printf("\033[1;0m\nStatus: %s\n\n", ft_print_status(0, status));
}

int	main(void)
{
	int	i = 0;

	ft_test_is("ft_isalpha", &isalpha, &ft_isalpha);
	ft_test_is("ft_isdigit", &isdigit, &ft_isdigit);
	ft_test_is("ft_isalnum", &isalnum, &ft_isalnum);
	ft_test_is("ft_isascii", &isascii, &ft_isascii);
	ft_test_is("ft_isprint", &isprint, &ft_isprint);
	ft_test_to("ft_toupper", &toupper, &ft_toupper);
	ft_test_to("ft_tolower", &toupper, &ft_tolower);
	
	ft_strlen_test(&strlen, &ft_strlen);	
	
	ft_memset_test(&memset, &ft_memset);

	ft_bzero_test(&bzero, &ft_bzero);
	return (0);
}
