#include "sort.h"

void bubble_sort ( std::vector< int > _vetor )
{
	int j = _vetor.size();

	for (j -= 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (_vetor[i] > _vetor[i+1])
				swap( _vetor, i, i+1 );
		}
	}
}