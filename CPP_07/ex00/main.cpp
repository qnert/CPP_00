/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:18:29 by skunert           #+#    #+#             */
/*   Updated: 2023/12/01 14:46:58 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void){
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}


// class Awesome{
// 	public:
// 		Awesome(void): _n(0){}
// 		Awesome (int n): _n(n){}
// 		Awesome&	operator=(Awesome& a){_n = a._n; return (*this);}
// 		bool		operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
// 		bool		operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
// 		bool		operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
// 		bool		operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
// 		bool		operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
// 		bool		operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}
// 		int			get_n(void) const {return (_n);}

// 	private:
// 		int			_n;
// };

// std::ostream&	operator<<(std::ostream& os, Awesome const& other){
// 	os << other.get_n(); return (os);
// }

// int main(void)
// {
// 	Awesome a(2), b(4);

// 	swap(a, b);
// 	std::cout << a << " " << b << std::endl;
// 	std::cout << max(a, b) << std::endl;
// 	std::cout << min(a, b) << std::endl;
// 	return (0);
// }