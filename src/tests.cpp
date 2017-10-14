#include "sort.h"

bool verify_order ( vector<int> & _vetor, int _order )
{
	if (_order == CRESCENTE)
	{
		for (size_t i = 0; i < _vetor.size()-1; i++)
			if (_vetor[i] > _vetor[i+1]) return false;
	}
	else if (_order == DECRESCENTE)
	{
		for (size_t i = 0; i < _vetor.size()-1; i++)
			if (_vetor[i] < _vetor[i+1]) return false;
	}
	else
	{
		if (verify_order(vetor, CRESCENTE) || verify_order(vetor, DECRESCENTE))
			return false;
	}
	
	return true;
}