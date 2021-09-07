/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:35:52 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 00:50:38 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{

	public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phonenumber;
	std::string dark_secret;
	Contact(void);
	~Contact(void);
	std::string get_first_name(void)const;
	void set_first_name(std::string);
	std::string get_last_name(void)const;
	void set_last_name(std::string);
	std::string get_nickname(void)const;
	void set_nickname(std::string);
	std::string get_phonenumber(void)const;
	void set_phonenumber(std::string);
	std::string get_dark_secret(void)const;
	void set_dark_secret(std::string);


	private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phonenumber;
	std::string _dark_secret;
};




#endif