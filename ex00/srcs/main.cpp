/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:14:38 by praclet           #+#    #+#             */
/*   Updated: 2021/04/23 15:39:57 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void)
{
	{
		int a = 1;
		int b = -2;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		swaps<int>(a, b);
		std::cout << "a: " << a << ", b: " << b << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		float a = 1.1;
		float b = -2.2;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		swaps<float>(a, b);
		std::cout << "a: " << a << ", b: " << b << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		int a = 1;
		int b = -2;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "min: " << min<int>(a, b) << std::endl;
		std::cout << "min: " << min<int>(b, a) << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		float a = 1;
		float b = -2;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "min: " << min<float>(a, b) << std::endl;
		std::cout << "min: " << min<float>(b, a) << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		int a = 1;
		int b = -2;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "max: " << max<int>(a, b) << std::endl;
		std::cout << "max: " << max<int>(b, a) << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		float a = 1;
		float b = -2;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "max: " << max<float>(a, b) << std::endl;
		std::cout << "max: " << max<float>(b, a) << std::endl;
	}
	return (0);
}
