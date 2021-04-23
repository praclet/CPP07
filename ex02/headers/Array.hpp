/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:22:33 by praclet           #+#    #+#             */
/*   Updated: 2021/04/23 17:53:21 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <class T> class Array
{
	private:
		unsigned int _size;
		T * _tab;
	public:
		Array() : _size(0), _tab(NULL)
		{
		};

		Array(unsigned int n) : _size(n)
		{
			if (_size)
				_tab = new T[_size];
			else
				_tab = NULL;
		};

		Array(Array const & src) : _size(src._size)
		{
			if (_size)
				_tab = new T[_size];
			else
				_tab = NULL;
			for (unsigned int i = 0;i < _size;i++)
				_tab[i] = src._tab[i];
		};

		~Array()
		{
			if (_size)
				delete [] _tab;
		};

		Array & operator=(Array const & src)
		{
			if (&src == this)
				return (*this);
			if (_size)
				delete [] _tab;
			_size = src._size;
			if (_size)
				_tab = new T[_size];
			else
				_tab = NULL;
			for (unsigned int i = 0;i < _size;i++)
				_tab[i] = src._tab[i];
			return (*this);
		};

		T & operator[](unsigned int n) const
		{
			if (n < _size)
				return (_tab[n]);
			throw(std::range_error("Out of range access in Array"));
		};

		unsigned int size() const
		{
			return (_size);
		};
};

#endif
