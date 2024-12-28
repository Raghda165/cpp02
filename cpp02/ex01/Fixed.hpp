/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:05:58 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/28 21:54:25 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>
class Fixed{
	private:
		int raw_value ;
		static const  int fractional_bits = 8;
	public:
		Fixed (void);
		Fixed (const int num);
		Fixed (const float num);
		Fixed(const Fixed &obj);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed & operator=( const Fixed & other)
		{
			if (this == &other)
				return (*this);
			else
			{
				raw_value = other.raw_value;
			}
			std::cout<<"Copy assignment operator called"<<std::endl;
			return (*this);
		}
		~Fixed();
		int getRawBits( void ) const
		{
			std::cout <<"getRawBits member function called"<<std::endl;
			return(this -> raw_value);
		}
		void setRawBits( int const raw )
		{
			this -> raw_value = raw;
		}

};

#endif
