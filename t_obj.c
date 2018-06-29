/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_obj.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:10:23 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/26 00:10:23 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

t_obj	*mk_t_obj(size_t e, void *data)
{
	t_obj *ret;
	
	ret = ft_memalloc(sizeof(t_obj));
	ret->len = e;
	ret->data = ft_memalloc(e);
	ft_memcpy(ret->data, data, e);
	return (ret);
}

void del_t_obj(t_obj **a)
{
	free((*a)->data);
	free(*a);
	*a = NULL;
}

t_check *mk_check(t_obj *a, t_obj *b, char *failmsg)
{
	t_check *ret;

	ret = (t_check *)ft_memalloc(sizeof(t_check));
	ret->val_a = a;
	ret->val_b = b;
	ret->msg_fail = failmsg;
	ret->test_len = ft_maxi(a->len, b->len);
	return (ret);
}