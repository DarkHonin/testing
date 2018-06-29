/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:18:11 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/16 13:45:15 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTING_H

# define TESTING_H

#include <string.h>
#include <libft.h>
#include <stdlib.h>

# define T_INT(in) mk_t_obj(sizeof(int), &in)
# define T_STR(in) mk_t_obj(sizeof(char) * ft_strlen(in), in)

typedef	struct s_tobj
{
	void 	*data;
	size_t	len;
} t_obj;

typedef struct s_check
{
	t_obj	*val_a;
	t_obj	*val_b;
	size_t	test_len;
	char	*msg_fail;
} t_check;

t_obj	*mk_t_obj(size_t e, void *data);
t_check *mk_check(t_obj *a, t_obj *b, char *failmsg);
void	del_t_obj(t_obj **a);
int		do_test(t_obj *a, t_obj *b, size_t len);
int 	do_check(t_check *check);

#endif
