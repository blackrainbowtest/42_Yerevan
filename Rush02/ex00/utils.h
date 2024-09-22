#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_atoi(const char *str);
void	ft_putstr(const char *str);
int		ft_strlen(const char *str);
int		ft_no_content(int fd, char *content);
char	*ft_content(char *content, char *buffer, int r_b, int *t_b);
char	*ft_read_file_data(const char *filename, int *total_bytes);
#endif