#include "sort.h"

void quicksort ( std::vector< int > _vetor, int _left, int _right )
{
    if(_left < _right) { 
        int boundary = _left;
        for (int i = _left + 1; i < _right; i++) { 
            if (_vetor[i] < _vetor[_left]) {
            	swap( _vetor, i, ++boundary );
            }
        }
        
        swap( _vetor, _left, boundary );
        quicksort( _vetor, _left, boundary );
        quicksort( _vetor, boundary + 1, _right );
    }   
}