/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:22:01 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/26 00:22:01 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	do_test(t_obj *a, t_obj *b, size_t len)
{
	if ((a->len & b->len) < len)
		return (a->len - b->len);
	return (ft_memcmp(a->data, b->data, len));
}

int do_check(t_check *check)
{
	int const result = do_test(check->val_a, check->val_b, check->test_len);
	if (result != 0)
		ft_putendl(check->msg_fail);
	return (result);	
}