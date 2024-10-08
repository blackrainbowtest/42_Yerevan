#ifndef LIB_H
# define LIB_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_core(char *str, char *dict);
char	**ft_split_content(char *str);
void	ft_process_dict_data(char *num, int len, int i);
char	**static_save(char **base);
void	ft_print_three_helper(char *str, int count, int *is_first);
void	ft_process_teen_digits(char *str);
void	ft_process_tens_digits(char *str, int count);
void	ft_print_three(char *str, int count, int is_first);
void	ft_print_two(char *str, int count, int is_fist);
void	ft_print_one(char *str, int count, int is_first);
void	ft_get_word(int index);
int		ft_get_tail(int div);
void	ft_process_three(char *num, int len, int i, int *count);
void	ft_process_two(char *num, int len, int i, int *count);
void	ft_process_one(char *num, int len, int i, int *count);
int		ft_count_digits(char *str);
void	ft_print_zero_helper(char *str, int count, int *is_first);
#endif
