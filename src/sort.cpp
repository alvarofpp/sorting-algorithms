#include "sort.h"

void print_array ( std::vector< int > _vetor )
{
	std::cout << "[ ";
	std::copy( _vetor.begin(), _vetor.end(), std::ostream_iterator<int>( std::cout, " " ) );
	std::cout << "]";
}