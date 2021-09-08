/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:35:52 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/08 04:51:50 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact
{
	public:
	Contact(void);
	~Contact(void);
	std::string	get_first_name(void)const;
	void		set_first_name(std::string first_name);
	std::string get_last_name(void)const;
	void		set_last_name(std::string last_name);
	std::string get_nickname(void)const;
	void		set_nickname(std::string nickname);
	std::string get_phonenumber(void)const;
	void		set_phonenumber(std::string phonenumber);
	std::string get_dark_secret(void)const;
	void		set_dark_secret(std::string dark_secret);
	bool		get_exists(void)const;
	bool		set_exists(bool exists);

	private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phonenumber;
	std::string _dark_secret;
	bool		_exists;
};
#endif