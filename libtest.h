/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:18:11 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/16 13:28:14 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTING_H

# define TESTING_H
# define MK_T_INT(v) make_test(&v, sizeof(int))

#include <string.h>
#include <libft.h>

typedef	struct s_test_obj
{
	void 	*data;
	size_t	len;
} t_test;

t_test *make_test(void *data, size_t len);
void    del_test(t_test *a);
int	ct_int(t_test *a, t_test *b);


#endif