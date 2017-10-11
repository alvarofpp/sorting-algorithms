#include "sort.h"

void insertion_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	int size = _vetor.size();
	int aux;
	
	for (int i = 0; i < size-1; i++)
	{
		int j = i+1;
		aux = _vetor[j];
		while ((j > 0) && (aux < _vetor[j-1]))
		{
			_vetor[j] = _vetor[j-1];
			j--;
		}
		_vetor[j] = aux;
	}
}

void selection_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	int size = _vetor.size();
	int menor;
	bool troca = false;

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
			{
				troca = true;
				menor = j;
			}
		}

		if (!troca)
			break;

		swap( _vetor, i, menor );
	}
}