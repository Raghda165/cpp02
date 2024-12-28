/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:06:17 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/28 14:06:23 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(void )
{
    std::cout << "Default constructor called"<<std::endl;
    this->raw_value = 0;
}
Fixed::Fixed(Fixed &obj)
{
	 std::cout << "Copy constructor called"<<std::endl;
    raw_value = int(obj.raw_value);
}
Fixed ::~Fixed()
{
    std::cout << "Destructor called"<<std::endl;
}
