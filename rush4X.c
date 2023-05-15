/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush4X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:08:32 by coder             #+#    #+#             */
/*   Updated: 2023/03/07 11:51:58 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int cl, int rw)
{
	int i;
	int	j;

	i = 1;
	j = 1;
	while (i <= rw)
	{
		while (j <= cl)
		{
			if (i == 1 && j == 1 || i == rw && j == cl)
				write 'A';
			else if (j == 1  && i > 1 && i < rw || j == col && i < rw && i > 1)
		   			write 'B';
			else if (i == 1 && j == cl || i == rw && j == 1)
					write 'C'
			else
		   		write ' '
			j++;
		i++;
		}
	}
}
