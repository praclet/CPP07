/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:12:58 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 10:05:06 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T> void swap (T & a, T & b)
{
	T tmp(a);

	a = b;
	b = tmp;
}

template <class T> T const & min (T const & a, T const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <class T> T const & max (T const & a, T const & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
