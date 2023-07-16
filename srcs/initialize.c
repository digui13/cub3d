/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:56:18 by dpestana          #+#    #+#             */
/*   Updated: 2023/07/16 19:50:23 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/cubed.h"

void	initialize(t_data *data)
{
	data->file.no_path = NULL;
	data->file.so_path = NULL;
	data->file.we_path = NULL;
	data->file.ea_path = NULL;
	data->file.ceiling = NULL;
	data->file.floor = NULL;
	data->map.matrix = NULL;
	data->map.max_x = NULL;
	data->map.lines = 0;
	data->rd.fd = -1;
	data->rd.line = NULL;
	data->rd.map_end = NO;
	data->player.dir = -1;
	data->player.x = -1;
	data->player.y = -1;
}
