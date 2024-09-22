#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int		ft_no_content(int fd, char *content);
char	*ft_content(char *content, char *buffer, int r_b, int *t_b);

char	*ft_read_file_data(const char *filename, int *total_bytes)
{
	int		file_descrip;
	char	buffer[BUFFER_SIZE];
	char	*content;
	int		bytes_read;

	*total_bytes = 0;
	file_descrip = open(filename, O_RDONLY);
	if (file_descrip == -1)
		return (NULL);
	content = (char *)malloc(1);
	if (ft_no_content(file_descrip, content))
		return (NULL);
	content[0] = '\0';
	bytes_read = read(file_descrip, buffer, sizeof(buffer) - 1);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		content = ft_content(content, buffer, bytes_read, total_bytes);
		if (ft_no_content(file_descrip, content))
			return (NULL);
		bytes_read = read(file_descrip, buffer, sizeof(buffer) - 1);
	}
	close(file_descrip);
	return (content);
}

int	ft_no_content(int fd, char *content)
{
	if (!content)
	{
		close(fd);
		free(content);
		return (1);
	}
	return (0);
}

char	*ft_content(char *content, char *buffer, int r_b, int *t_b)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	while (i < r_b)
	{
		new = (char *)malloc(*t_b + 2);
		if (!new)
		{
			free(content);
			return (NULL);
		}
		j = -1;
		while (++j < *t_b)
			new[j] = content[j];
		new[*t_b] = buffer[i];
		new[*t_b + 1] = '\0';
		free(	);
		content = new;
		(*t_b)++;
		i++;
	}
	return (content);
}
