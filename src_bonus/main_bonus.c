/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:20:14 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/11 14:34:05 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/cube_bonus.h"

void	free_all_map(t_data *map);

int main(int ac, char **av)
{
	int		check_map;
	t_data	map;


	check_map = 0;
	check_map = parsing(ac, av, &map);
	if (check_map >= 0)
	{
		printf ("game start\n");
		game_start(&map);
	}
	free_all_map(&map);
	return (0);
}

void	free_all_map(t_data *map)
{
	free(map->texture[NORTH]);
	free(map->texture[SOUTH]);
	free(map->texture[WEST]);
	free(map->texture[EAST]);
	free(map->texture);
	ft_free_tab(map->map);
}
