/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 06:47:32 by asuissa           #+#    #+#             */
/*   Updated: 2017/12/25 19:00:47 by asuissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char		**tab;
	int			nb_l;
	t_carre		carre;
	t_pieces	*piece_box;

	nb_l = 0;
	if (argc != 2)
	{
		ft_putstr("usage: fillit map_file\n");
		return (1);
	}
	if (!(tab = ft_read(argv[1], &nb_l)))
	{
		ft_putstr("error\n");
		return (1);
	}
	make_square(ft_sqrt(nb_l), &carre);
	piece_box = makepiece(tab, nb_l);
	tab = remplircarre(piece_box, &carre);
	ft_print_words_tables(tab);
	return (0);
}
