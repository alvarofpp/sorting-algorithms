void shell_sort ( std::vector<int> & _vetor, int _left = 0, int _right = 0  )
{
	// Tamanho do vetor
	size_t size = _vetor.size();
	// Espaco entre elementos comparados
    size_t gap = size / 2;
    // Ate chegar a menor comparacao de elementos
    while (gap > 0)
    {
    	// Do primeiro indice ate o indice que permite realizar a comparacao
        for (size_t i = 0; i < (size - gap); i++)
        {
        	// Indice do elemento que sera usado na comparacao
            size_t j = i + gap;
            // Valor do elemento que sera usado na comparacao
            size_t tmp = _vetor[j];
            // Realiza as trocas
            while ((j >= gap) && (tmp < _vetor[j - gap]))
            {
                _vetor[j] = _vetor[j - gap];
                j -= gap;
            }
            _vetor[j] = tmp;
        }
        // Mudanca do valor da distancia dos elementos
        if (gap == 2)
            gap = 1;
        else
        	// Com 2.2, iremos arredondar o valor para baixo
            gap /= 2.2;
    }
}