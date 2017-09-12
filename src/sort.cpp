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

void selection_sort ( std::vector< int > & _vetor )
{
	int size = _vetor.size();
	int aux, menor;

	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (i == j)
			{
				menor = j;
				continue;
			}
			else if (_vetor[menor] > _vetor[j])
				menor = j;
		}

		aux = _vetor[i];
		_vetor[i] = _vetor[menor];
		_vetor[menor] = aux;
	}
}