/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 20:20:23 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 20:45:25 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i += 1;
	}
}