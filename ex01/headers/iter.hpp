/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:12:58 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 10:07:53 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<class T> void iter(T tab[], std::size_t size, void (*fun)(T &))
{
	for (std::size_t i = 0;i < size;i++)
		fun(tab[i]);
}

#endif
