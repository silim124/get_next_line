/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:18:30 by silim             #+#    #+#             */
/*   Updated: 2021/08/23 20:16:17 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# define OPEN_MAX 1024

# define _EOF 0
# define _ERROR -1
# define _SUCCESS 1

int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*is_newline(char *str);

int		get_output(char **backup, char **line, char *nl_here);
int		get_next_line(int fd, char **line);

#endif
