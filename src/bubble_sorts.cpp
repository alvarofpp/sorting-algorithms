#include "sort.h"

void bubble_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	// Tamanho do vetor
	int j = _vetor.size();
	// Percorremos o vetor do seu último indice até o primeiro (direita para a esquerda)
	for (j -= 1; j > 0; j--)
	{
		/*
		* Percorremos o vetor da esquerda para a direita.
		* Vamos só até 'j' pois sempre garantimos que os elementos > 'j' já estão ordenados
		*/
		for (int i = 0; i < j; i++)
		{
			// Se o valor atual for maior que o valor a sua frente
			if (_vetor[i] > _vetor[i+1])
				// Realizamos a troca dos valores
				swap( _vetor, i, i+1 );
		}
	}
}

void shell_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	// Tamanho do vetor
	size_t size = _vetor.size();
	// Espaço entre elementos comparados
    size_t gap = size / 2;
    // Até chegar a menor comparação de elementos
    while (gap > 0)
    {
    	// Do primeiro indice até o indice que permite realizar a comparação
        for (size_t i = 0; i < (size - gap); i++)
        {
        	// Indice do elemento que será usado na comparação
            size_t j = i + gap;
            // Valor do elemento que será usado na comparação
            int tmp = _vetor[j];
            // Realiza as trocas
            while ((j >= gap) && (tmp < _vetor[j - gap]))
            {
                _vetor[j] = _vetor[j - gap];
                j -= gap;
            }
            _vetor[j] = tmp;
        }
        // Mudança do valor da distância dos elementos
        if (gap == 2)
            gap = 1;
        else
        	// Com 2.2, iremos arredondar o valor para baixo
            gap /= 2.2;
    }
}