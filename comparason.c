/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparason.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:19:01 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/16 13:22:59 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	ct_int(t_test *a, t_test *b)
{
	return (ft_memcmp(a->data, b->data, a->len) == 0);
}