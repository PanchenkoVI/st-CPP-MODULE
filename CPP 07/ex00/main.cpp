/*
* Created: 2021/04/03
*/

#include "whatever.hpp"

int main( void )
{
	{
		std::cout << "#=========> TEST_1" << std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout <<"a = "<< a <<", b = "<< b << std::endl;
		std::cout <<"min( a, b ) = "<< ::min( a, b ) << std::endl;
		std::cout <<"max( a, b ) = "<< ::max( a, b ) << std::endl;
		std::string c ="chaine1";std::string d ="chaine2";
		::swap(c, d);
		std::cout <<"c = "<< c <<", d = "<< d << std::endl;
		std::cout <<"min( c, d ) = "<< ::min( c, d ) << std::endl;
		std::cout <<"max( c, d ) = "<< ::max( c, d ) << std::endl;
		std::cout << "#=========> TEST_2" << std::endl;
	}
	{
		Awesome a1(4);
		Awesome	a2(2);
		int i1 = 4;
		int i2 = 2;
		char c1 = '4';
		char c2 = '2';
		double d1 = 4;
		double d2 = 2;
		std::string s1  = "4";
		std::string s2 = "2";

		std::cout << "#=========> INT" << std::endl;
		std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
		::swap( i1, i2 );
		std::cout << "swap: " << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
		std::cout << "min( i1, i2 ) = " << ::min( i1, i2 ) << std::endl;
		std::cout << "max( i1, i2 ) = " << ::max( i1, i2 ) << std::endl;
		std::cout << "#=========> CHAR" << std::endl;
		std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
		::swap( c1, c2 );
		std::cout << "swap: " << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
		std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
		std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl;
		std::cout << "#=========> STRING" << std::endl;
		std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
		::swap(s1, s2);
		std::cout << "swap: " << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
		std::cout << "min( c, d ) = " << ::min( s1, s2 ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( s1, s2 ) << std::endl;
		std::cout << "#=========> DOUBLE" << std::endl;
		std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
		::swap(d1, d2);
		std::cout << "swap: " << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
		std::cout << "min( d1, d2 ) = " << ::min( d1, d2 ) << std::endl;
		std::cout << "max( d1, d2 ) = " << ::max( d1, d2 ) << std::endl;
		std::cout << "#=========> CLASS" << std::endl;
		std::cout << "a1 = " << a1 << ", d2 = " << a2 << std::endl;
		::swap(a1, a2);
		std::cout << "swap: " << "a1 = " << a1 << ", d2 = " << a2 << std::endl;
		std::cout << "min( a1, a2 ) = " << ::min( a1, a2 ) << std::endl;
		std::cout << "max( a1, a2 ) = " << ::max( a1, a2 ) << std::endl;
		// std::cout << "a1 = " << a1._n << ", d2 = " << a2._n << std::endl;
		// ::swap(a1, a2);
		// std::cout << "swap: " << "a1 = " << a1._n << ", d2 = " << a2._n << std::endl;
		// std::cout << "min( a1, a2 ) = " << ::min( a1._n, a2._n ) << std::endl;
		// std::cout << "max( a1, a2 ) = " << ::max( a1._n, a2._n ) << std::endl;
	}
	return 0;
}