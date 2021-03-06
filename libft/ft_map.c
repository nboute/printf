/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:09:24 by nboute            #+#    #+#             */
/*   Updated: 2017/01/03 17:58:09 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float		ft_map(float val, float range, float min2, float max2)
{
	if (!range)
		return (0);
	return (min2 + ((max2 - min2) * (val / range)));
}
