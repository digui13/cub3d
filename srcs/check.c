/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:44:40 by dpestana          #+#    #+#             */
/*   Updated: 2023/07/03 16:51:34 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/cub3d.h"

void	check_args(t_data data, int ac)
{
	if (ac != 2)
		gameover(data, FAIL, "Error: Invalid args number");
}

void	check_filename(t_data data, char *filename)
{
	int	inc;

	inc = 0;
	while (*(filename + inc) != '\0')
	{
		if (!ft_strcmp((filename + inc), ".cub") && inc != 0)
			return ;
		inc++;
	}
	gameover(data, FAIL, "Error: Invalid filename");
}