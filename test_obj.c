/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_obj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 12:00:43 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/16 13:27:42 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

t_test *make_test(void *data, size_t len)
{
    t_test *ret;
    
    ret = (t_test *)ft_memalloc(sizeof(t_test));
    ret->data = data;
    ret->len = len;
    return (ret);
}

void    del_test(t_test *a)
{
    free(a->data);
    free(a);
}