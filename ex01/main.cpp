/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:04:07 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 00:36:21 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream> //cin/cout
#include <string>
//#include <cstdlib> //exit


std::string	main_menu(void)
{
	std::string	input;

	std::cout << "Available options: ADD, SEARCH, EXIT" << std::endl;
	std::cin >> input;
	return (input);
}

int		main(void)
{
	std::string input;

	std::cout << "Welcome to Phonebook." << std::endl;
	while (1)
	{
		input = main_menu();
		//std::cout << "input received: " << input << std::endl;
		if (input == "ADD")
		{
			std::cout << "(asked ADD)" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "(asked SEARCH)" << std::endl;
		}
		else if (input == "EXIT")
		{
			std::cout << "Goodbye." << std::endl;
			break;
		}
		else
		{
			std::cout << "Invalid input." << std::endl;
		}
	}
	return (0);
}