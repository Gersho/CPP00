/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:35:59 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 05:57:34 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_exists = false;
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::get_first_name(void)const
{
	return (_first_name);
}

void		Contact::set_first_name(std::string first_name)
{
	_first_name = first_name;
}

std::string Contact::get_last_name(void)const
{
	return (_last_name);
}

void		Contact::set_last_name(std::string last_name)
{
	_last_name = last_name;
}

std::string Contact::get_nickname(void)const
{
	return (_nickname);
}

void		Contact::set_nickname(std::string nickname)
{
	_nickname = nickname;
}

std::string Contact::get_phone_number(void)const
{
	return (_phone_number);
}

void		Contact::set_phone_number(std::string phone_number)
{
	_phone_number = phone_number;
}

std::string Contact::get_dark_secret(void)const
{
	return (_dark_secret);
}

void		Contact::set_dark_secret(std::string dark_secret)
{
	_dark_secret = dark_secret;
}

bool		Contact::get_exists(void)const
{
	return (_exists);
}

void		Contact::set_exists(void)
{
	_exists = true;
}
