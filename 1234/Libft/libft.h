/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segome <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:33:26 by segome            #+#    #+#             */
/*   Updated: 2021/10/18 22:33:27 by segome           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(const char *a);
char	*ft_strdup(const char *s);
int		ft_atoi(const char *str);
void	ft_bzero(char *a, size_t size);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(int ch);
int		ft_isalpha(int ch);
int		ft_isascii(int ch);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);
void	*ft_memchr(void *a, int c, int size);
int		ft_memcmp(const void *a, const void *b, int size);
void	*ft_memcpy(void *a, const void *b, int size);
char	*ft_memmove(void *a, void *b, int size);
void	*ft_memset(void *ch, int a, int len);
char	**ft_split(char const *a_str, char a_delim);
char	*ft_strchr(char *a, int b);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlcat(char *a, const char *b, size_t size);
int		ft_strlcpy(char *a, const char *b, size_t size);
int		ft_strncmp(const char *a, const char *b, size_t size);
char	*ft_strnstr(const char *a, const char *b, size_t size);
char	*ft_strrchr(char *a, int b);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
