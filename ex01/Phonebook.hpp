/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:10:24 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 05:09:46 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook
{
	public:
	Phonebook(void);
	~Phonebook(void);
	void		print_contact_short(int index) const;
	void		print_contact_long(int index) const;
	void		set_contact(int index);
	std::string	get_first_name(int index)const;
	void		set_first_name(int index, std::string first_name);
	std::string get_last_name(int index)const;
	void		set_last_name(int index, std::string last_name);
	std::string get_nickname(int index)const;
	void		set_nickname(int index, std::string nickname);
	std::string get_phonenumber(int index)const;
	void		set_phonenumber(int index, std::string phonenumber);
	std::string get_dark_secret(int index)const;
	void		set_dark_secret(int index, std::string dark_secret);
	bool		get_exists(int index)const;
	bool		set_exists(int index, bool exists);
	
	private:
	Contact contacts[8];
};



#endif