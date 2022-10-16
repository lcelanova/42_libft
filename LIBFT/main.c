 #include "libft.h"

#include <stdio.h>
#include <string.h>

int main (void)
{

/*

//IS ALPHA
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", ft_isalpha('1'));

// IS DIGIT

    printf("Esta es isdigit original: %d\n", isdigit('2'));
    printf("Esta es ft_isdigit : %d\n", ft_isdigit('2'));
    
//IS ALNUM
   printf("Esta es isalnum original: %d\n", isalnum(1));
   printf("Esta es ft_isalnum : %d\n", ft_isalnum(1));
   
//IS ASCII
    
    printf("Esta es isascii original: %d\n", isascii(10));
    printf("Esta es ft_isascii : %d\n", ft_isascii(10));


//IS PRINT
    printf("Esta es la original: %d\n", isprint('1'));
    printf("Esta es la mia: %d\n", ft_isprint('1'));
    printf("Esta es laoriginal: %d\n", isprint("ñ"));
    printf("Esta es la mia: %d\n", ft_isprint("ñ"));
    printf("Esta es la original: %d\n", isprint('/'));
    printf("Esta es la mia : %d\n", ft_isprint('/'));


//STR LEN
    printf("Esta es la original: %lu\n", strlen("hello"));
    printf("Esta es la mia : %d\n", ft_strlen("hello"));
    printf("Esta es la original: %d\n", strlen(" "));
    printf("Esta es la mia : %d\n", ft_strlen(" "));
    printf("Esta es la original: %d\n", strlen("l"));
    printf("Esta es la mia : %d\n", ft_strlen("l"));

// MEMSET
   char str[51];
   char str1[51];

   //strcpy(str,"This is a function");
   //puts(str);

   memset(str,'S',52);
   puts(str);

   printf("\n");

   //strcpy(str1,"This is a function");
   //puts(str1);

   ft_memset(str1,'S',52);
   puts(str1);


// TOUPPER
char c = toupper(' ');
char b = ft_toupper(' ');
printf("%c\n", c);
printf("%c\n", b);


// TOLOWER
char c = tolower('A');
char b = ft_tolower('A');
printf("%c\n", c);
printf("%c\n", b);

// ATOI
printf("original: %d\n", atoi("1234"));
printf("mia: %d\n", ft_atoi("1234"));

//STRCHR
char str[50] = "hello";
int c = 's';
printf("original: %s\n", strchr(str, c));
printf("mia : %s\n", ft_strchr(str, c));

// STRRCHR
char str[50] = "hello";
int c = 's';
printf("original: %s\n", strrchr(str, c));
printf("mia : %s\n", ft_strrchr(str, c));

char *s1 = "helloa";
char *s2 = "hellob";
printf("original: %d\n", strncmp(s1,s2,10));
printf("mia: %d\n", ft_strncmp(s1,s2,10));

// STRLCPY

char src[50] = "Hy";
char dst[50] = "Ho";
printf("%s\n", src);
printf("original %lu\n", strlcpy(src, dst, 10));
printf("%s\n", src);


char src1[50] = "Hy";
char dst1[50] = "Ho";
printf("%s\n", src1);
printf("mia %lu\n", ft_strlcpy(src1, dst1, 10));
printf("%s\n", src1);


// STRLCAT
char src[50] = "000";
char dst[50] = "000";
printf("original %lu\n", strlcat(src, dst, 5));
printf("%s\n", dst);


char src1[50] = "000";
char dst1[50] = "000";
printf("mia %lu\n", ft_strlcat(src1, dst1, 5));
printf("%s\n", dst1);


// STRDUP
char src[50] = "000";
char src1[50] = "000";
printf("original %s\n", strdup(src));
printf("mia %s\n", ft_strdup(src1));

//STRNSTR

char haystack[50] = "p";
char needle[50] = "hello pim laura";
printf("original %s\n", strnstr(haystack,needle,6));
printf("mia %s\n", ft_strnstr(haystack,needle,6));


// BZERO

	char *str1;
	char *str2;

	(void)argc;
	str1 = strdup(argv[1]);
	str2 = strdup(argv[1]);
	bzero(str1, 5);
	ft_bzero(str2, 5);
	
	int x = 0;
	while (x < 13)
	{
		printf("s1: %c\n", str1[x]);
		printf("s2 %c\n", str2[x]);
		x++;
	}

// MEMCPY
char *ret;
char src[50] = "Hy";
char dst[50] = "Ho";
ret = ft_memcpy(src, dst, 10);
printf("%s\n",ret);
//char src1[50] = "Hy";
//char dst1[50] = "Ho";
//printf("mia: %s\n",ft_memcpy(src1, dst1, 10));

//MEMCHR

char *s1 = "hello this is a string";
char c = 's';
char *found = ft_memchr(s1,c,10);
printf("%s", found);

*/

//STRNSTR

char *str1 = "Hello";
char *str2 = "Hello";
//printf("original: %s", strnstr(str1,str2,5));
printf("mia: %s", ft_strnstr(str2,str1,5));


}