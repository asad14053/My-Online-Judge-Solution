#include <cmath>
#include <vector>
#include <iostream>
#include <numeric>

int main()
{
    enum { EXPONENT = 10000 } ;
    const double LOG10 = std::log(10.0) / std::log(2) ;
    const int NDIGITS = int( ( EXPONENT + LOG10 ) / LOG10 )  ;

    std::vector<int> digits( NDIGITS ) ;
    digits.front() = 1 ; // least significant digit is at position 0

    for( int i = 0 ; i < EXPONENT ; ++i )
    {
      int carry = 0 ;
      for( int j = 0 ; j < NDIGITS ; ++j )
      {
          int value = digits[j] + digits[j] + carry ;
          if( value > 9 ) { carry = 1 ; value -= 10 ; }
          else carry = 0 ;
          digits[j] = value % 10 ;
      }
    }
    std::cout << std::accumulate( digits.begin(), digits.end(), 0 ) << '\n' ;
}
