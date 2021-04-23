/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:12:58 by praclet           #+#    #+#             */
/*   Updated: 2021/04/23 15:24:47 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T> void swaps (T & a, T & b)
{
	T tmp(a);

	a = b;
	b = tmp;
}

template <class T> T & min (T & a, T & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <class T> T & max (T & a, T & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
