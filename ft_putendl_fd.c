/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponomar <rponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:25:19 by rponomar          #+#    #+#             */
/*   Updated: 2024/08/31 18:36:48 by rponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd >= 0)
	{
		size_t max_ssize = __SIZE_MAX__ >> 1;
		size_t len = ft_strlen(s);

		if (len > max_ssize || write(fd, s, len) != (ssize_t)len)
			abort();
		if (write(fd, "\n", 1) != 1)
			abort();
	}
}

