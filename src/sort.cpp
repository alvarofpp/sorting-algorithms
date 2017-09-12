#include "sort.h"

void print_array ( std::vector< int > _vetor )
{
	std::cout << "[ ";
	std::copy( _vetor.begin(), _vetor.end(), std::ostream_iterator<int>( std::cout, " " ) );
	std::cout << "]";
}

void bubble_sort ( std::vector< int > & _vetor )
{
	int j = _vetor.size();
	int aux;

	for (j -= 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (_vetor[i] > _vetor[i+1])
			{
				aux = _vetor[i];
				_vetor[i] = _vetor[i+1];
				_vetor[i+1] = aux;
			}
		}
	}
}