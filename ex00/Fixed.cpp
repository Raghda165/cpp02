#include "Fixed.hpp"
Fixed::Fixed()
{
    std::cout << "Default constructor called"<<std::endl;
    this->number = 0;
}
Fixed::Fixed(Fixed &obj)
{
    number = int(obj.number);
    fixed_point_bits = const int(obj.fixed_point_bits);
}
Fixed ::~Fixed()
{
    std::cout << "Destructor called"<<std::endl;
}