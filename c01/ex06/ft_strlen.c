/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esevinc <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:28:36 by esevinc           #+#    #+#             */
/*   Updated: 2023/02/09 17:37:33 by esevinc          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
#include <unistd.h>
int main()
{
	char a[] = "puye";
	printf("%d",ft_strlen(a));
	
}
