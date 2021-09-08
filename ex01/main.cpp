/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:04:07 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 06:49:27 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

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
	Phonebook book;

	std::cout << "Welcome to Phonebook." << std::endl;
	while (1)
	{
		input = main_menu();
		if (input == "ADD")
		{
			book.add_contact();
		}
		else if (input == "SEARCH")
		{
			book.search();
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