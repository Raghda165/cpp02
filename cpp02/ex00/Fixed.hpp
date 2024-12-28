#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed{
	private:
		int raw_value ;
		static const  int fractional_bits = 8;
	public:
		Fixed (void);
		Fixed(Fixed &obj);
		Fixed & operator=(Fixed & other)
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
