#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*s;

	len = strlen(s1);
	i = 0;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= strlen(s))
		return (ft_strdup(""));
	if (strlen(s) <= len)
		len = strlen(s);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		new_str[i] = s[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int main()
{
	const char	*s1;

	s1 = "abdelhamid";
	printf("%s", ft_substr(s1, 0, 9));
}