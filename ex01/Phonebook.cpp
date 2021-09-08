/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:11:09 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 06:47:19 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

Phonebook::Phonebook(void)
{
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void		Phonebook::print_contact_long(int index) const
{
	if (index > 7 || index < 0 || !contacts[index].get_exists())
		return;
	std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
	std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone number : " << contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << contacts[index].get_dark_secret() << std::endl;
}

void		Phonebook::add_contact(void)
{
	int			i;
	std::string str;

	i = 0;
	while (i < 8)
	{
		if (!contacts[i].get_exists())
		{
			Phonebook::set_contact(i);
			return;
		}
		i++;
	}
	std::cout << "Too many entries, please choose one to replace, ABORT or value above 7 or under 0 to cancel." << std::endl;
	Phonebook::print_contact_list();
	std::cin >> str;
	if (str == "ABORT")
		return;
	i = std::atoi(str.c_str());
	if (i > 7 || i < 0)
		return;
	Phonebook::set_contact(i);
}

void		Phonebook::search(void) const
{

}

void		Phonebook::print_contact_list(void) const
{
	int i;
		//header
	i = 0;
	while (i < 8)
	{
		if (contacts[i].get_exists())
			print_contact_short(i);
		else
			return;
		i++;
	}

}

void		Phonebook::print_contact_short(int index) const
{
	if (index > 7 || index < 0 || !contacts[index].get_exists())
		return;
	//TODO
}

void		Phonebook::truncate_print(std::string str) const
{

}


void		Phonebook::set_contact(int index)
{
	std::string str;
	
	std::cout << "First name:" << std::endl;
	std::cin >> str;
	contacts[index].set_first_name(str);
	std::cout << "Last name:" << std::endl;
	std::cin >> str;
	contacts[index].set_last_name(str);
	std::cout << "Nickname:" << std::endl;
	std::cin >> str;
	contacts[index].set_nickname(str);
	std::cout << "Phone number:" << std::endl;
	std::cin >> str;
	contacts[index].set_phone_number(str);
	std::cout << "Darkest secret:" << std::endl;
	std::cin >> str;
	contacts[index].set_dark_secret(str);
	contacts[index].set_exists();
	std::cout << "Done!" << std::endl;
}
