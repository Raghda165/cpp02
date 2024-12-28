/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:06:04 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/28 22:07:41 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void )
{
    std::cout << "Default constructor called"<<std::endl;
    this->raw_value = 0;
}
Fixed::Fixed(const int num)
{
    std::cout << "int constructor called"<<std::endl;
    this->raw_value = num * 256;
}
Fixed::Fixed(const float num)
{
	std::cout << "float constructor called"<<std::endl;
    this->raw_value = num * 256;
}
Fixed::Fixed(const Fixed &obj)
{
	 std::cout << "Copy constructor called"<<std::endl;
    raw_value = int(obj.raw_value);
}
Fixed ::~Fixed()
{
    std::cout << "Destructor called"<<std::endl;
}
float Fixed ::toFloat( void ) const
{
	float real_num;

	real_num =(float) this->raw_value /(float) 256;
	return(real_num);
}
int Fixed::toInt( void ) const
{
	int norm_num;
	norm_num= roundf(this->raw_value/256);
	return(norm_num);
}


