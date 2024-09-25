#ifndef FT_ABS_H
# define FT_ABS_H

static inline int	abs_value(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

# define ABS(value) (abs_value(value))

#endif