/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:14:38 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 10:18:37 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<class T> void addOne(T & elem)
{
	elem++;
}

template<class T> void fun(T const & elem)
{
	std::cout << elem << std::endl;
}

int main(void)
{
	{
		int tab[3] = {1, 2, 3};

		::iter<int const>(tab, 3, fun<int const>);
	}
	std::cout << "------------------ " << __LINE__ << std::endl;
	{
		typedef char const * str;
		str const tab[4] = {"str1", "str2", "str3", "str4"};

		::iter<str const>(tab, 4, fun<str const>);
	}
	std::cout << "------------------ " << __LINE__ << std::endl;
	{
		std::string const tab[4] = {"str1", "str2", "str3", "str4"};

		::iter<std::string const>(tab, 4, fun<std::string>);
	}
	std::cout << "------------------ " << __LINE__ << std::endl;
	{
		float tab[6] = {3.141592,-85.45,2.6589,9898,454.5231,7};

		::iter<float const>(tab, 6, fun<float const>);
		std::cout << "---" << std::endl;
		// Second argument "5" is different from array's size on purpose.
		::iter<float>(tab, 5, addOne<float>);
		::iter<float const>(tab, 6, fun<float const>);
	}
}
