void bubble_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	// Tamanho do vetor
	int j = _vetor.size();
	// Percorremos o vetor do seu ultimo indice ate o primeiro (direita para a esquerda)
	for (j -= 1; j > 0; j--)
	{
		/*
		* Percorremos o vetor da esquerda para a direita.
		* Vamos so ate 'j' pois sempre garantimos que os elementos > 'j' ja estao ordenados
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