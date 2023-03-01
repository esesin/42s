/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esevinc <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:45:22 by esevinc           #+#    #+#             */
/*   Updated: 2023/02/05 21:21:08 by esevinc          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);

int	main()
{   
		ft_print_combn();
}

void	ft_putchar(char c)
{
	write(1, &c, 2);

}

void	ft_print_combn(int n, int m)
{	
	int a;
	int b;
	

	a = 0;
	while (a <= 8)
	{
		b = a + 1;
		while (b <= 9)
		{
			ft_print_combn(a, b);
			if (a != 8)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	


	 }
}
