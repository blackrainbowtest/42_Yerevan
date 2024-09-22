#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "utils.h"

int     ft_core(char *str, char *dict);
char	**ft_split_content(char *str, int total_bytes);
void    ft_process_dict_data(char *num, int len, int i);
char	**static_save(char **base);
void    ft_print_three(char *str, int count, int is_first);
void    ft_print_two(char *str, int count, int is_fist);
void    ft_print_one(char *str, int count, int is_first);
void    ft_get_word(int index);
void	ft_get_tail(int div);

#endif
