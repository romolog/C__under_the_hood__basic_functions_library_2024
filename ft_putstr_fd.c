/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponomar <rponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:06:19 by rponomar          #+#    #+#             */
/*   Updated: 2024/08/31 18:37:33 by rponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t max_ssize = __SIZE_MAX__ >> 1;

	if (fd >= 0)
	{
		size_t len = ft_strlen(s);
		if (len > max_ssize || write(fd, s, len) != (ssize_t)len)
			abort();
	}
}
