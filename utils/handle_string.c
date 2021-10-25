/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:43:24 by ehosu             #+#    #+#             */
/*   Updated: 2021/10/25 12:01:35 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>

int	handle_string(va_list arg)
{
	char	*str;
	int		count;
	int		j;

	count = 0;
	str = va_arg(arg, char *);
	if (!str)
		return (helper("(nill)"));
	j = 0;
	while (str[j])
	{
		count += write(1, &str[j], 1);
		j++;
	}
	return (count);
}
