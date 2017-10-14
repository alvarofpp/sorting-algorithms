#include "sort.h"

void print_array ( std::vector<int> & _vetor )
{
	cout << "[ ";
	std::copy( _vetor.begin(), _vetor.end(), std::ostream_iterator<int>( cout, " " ) );
	cout << "]";
}

void swap ( vector<int> & _vetor, int _left, int _right )
{
	int aux = _vetor[_right];
	_vetor[_right] = _vetor[_left];
	_vetor[_left] = aux;
}