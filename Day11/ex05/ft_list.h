/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:06:40 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 17:23:06 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;
t_list				*ft_list_push_params(int ac, char **av);
t_list				*ft_create_elem(void *data);
void				ft_list_push_front(t_list **begin_list, void *data);

#endif
