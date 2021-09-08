/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:10:24 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 06:48:09 by kzennoun         ###   ########lyon.fr   */
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
	void		print_contact_long(int index) const; 
	void		add_contact(void);
	void		search(void) const; //todo
	
	private:
	Contact contacts[8];
	void		print_contact_list(void) const; //todo
	void		print_contact_short(int index) const; //todo
	void		truncate_print(std::string str) const; //todo
	void		set_contact(int index);
};



#endif