#include "sort.h"

bool verify_order ( vector<int> & _vetor, int _order )
{
	for (size_t i = 0; i < _vetor.size()-1; i++)
		if (_vetor[i] > _vetor[i+1]) return false;
	return true;
}

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