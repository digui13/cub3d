/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:42:11 by dpestana          #+#    #+#             */
/*   Updated: 2023/07/08 20:54:22 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/cubed.h"

void	line_elements(t_data *data)
{
	int	inc;

	inc = 0;
	while (*(data->rd.line + inc) != '\0')
	{
		if (!ft_strncmp((data->rd.line + inc), "NO "))
			set_no_path(data, (data->rd.line + inc + 4) , "NO", &inc);


		inc++;
	}
}

void	reading(t_data *data, char *filename)
{
	data->rd.fd = open(filename, O_RDONLY);
	if (data->rd.fd == -1)
		gameover(data, FAIL, "Error: File doesnt open");
	data->rd.line = get_next_line(data->rd.fd );
	while (data->rd.line != NULL)
	{
		if (!has_file_orientations(data) && !has_file_colors(data))
			line_elements(data);
		//else
		//	line_map(data);
		data->rd.line = get_next_line(data->rd.fd);
	}
	close(data->rd.fd);
	if (!has_file_orientations(data))
		gameover(data, EXIT_FAILURE, "Error: Miss file orientation values");
	if (!has_file_colors(data))
		gameover(data, EXIT_FAILURE, "Error: Miss file color values");
	if (!has_file_map(data))	
		gameover(data, EXIT_FAILURE, "Error: Miss file map values");
}