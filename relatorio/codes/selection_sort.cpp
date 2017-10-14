void selection_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	// Tamanho do vetor
	int size = _vetor.size();
	// Indice do menor valor
	int menor;

	// Percorremos o vetor
	for (int i = 0; i < size; i++)
	{
		/*
		* Comecamos do elemento `i', pois sempre iremos garantir que os elementos menor que ci' estejam ja ordenados.
		* Logo nao e necessario percorrer eles nesse segundo `for'
		*/
		for (int j = i; j < size; j++)
		{
			// Se for o primeiro indice verificado desse novo for, salva ele como o menor valor ate entao
			if (i == j)
			{
				menor = j;
				continue;
			}
			/*
			* Compara se o valor verificado e menor que o menor valor registrado.
			* Se for, salva o novo indice do menor valor
			*/
			if (_vetor[menor] > _vetor[j])
				menor = j;
		}
		// Realiza a troca
		swap( _vetor, menor, i );
	}
}