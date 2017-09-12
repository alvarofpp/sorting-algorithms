#include "sort.h"

void print_array ( int * _first, int * _last )
{
	std::cout << "[ ";
	std::copy( _first, _last, std::ostream_iterator<int>( std::cout, " " ) );
	std::cout << "]";
}

int bubble_sort ( int * _first, int * _last )
{
	int j = (_last - _first);
	int aux;

	for (j -= 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (_first[i] > _first[i+1])
			{
				aux = _first[i];
				_first[i] = _first[i+1];
				_first[i+1] = aux;
			}
		}
	}

	return (_last - _first);
}