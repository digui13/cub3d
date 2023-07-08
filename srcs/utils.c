/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:21:17 by dpestana          #+#    #+#             */
/*   Updated: 2023/07/08 22:41:08 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/cubed.h"

void	skip_spaces(char *str, int *i)
{
	while (*(str + (*i)) != '\0'
		&& *(str + (*i)) == ' ')
		(*i)++;
}

void	skip_str(char *str, int *i)
{
	while (*(str + (*i)) != '\0'
		&& *(str + (*i)) != ' '
		&& *(str + (*i)) != '\n')
		(*i)++;
}
