/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:15:15 by laura             #+#    #+#             */
/*   Updated: 2022/09/29 12:18:01 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H_INCLUDED__
#define __LIBFT_H_INCLUDED__

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *s);
void *ft_memset(void *b, int c, unsigned long len);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
int ft_atoi(const char *str);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strdup(const char *s1);
void ft_bzero(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void *ft_memmove(void *dst, const void *src, size_t len);


#endif //LIBFT_H_INCLUDED