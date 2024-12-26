#ifndef FIXED_HPP
#define FIXED_HPP
class FIXED_HPP{
	private:
		int number ;
		static const fixed_point_bits;
	public:
		Fixed ();
		Fixed(Fixed &obj);
		~Fixed();
		int getRawBits( void ) const
		{
			return(this -> fixed_point_bits);
		}
		void setRawBits( int const raw )
		{
			this->fixed_point_bits = raw;
		}

};
#endif