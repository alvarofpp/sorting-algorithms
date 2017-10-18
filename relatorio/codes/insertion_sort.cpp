void insertion_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	// Tamanho do vetor
	int size = _vetor.size();
	// Variavel auxiliar
	int aux;

	// Percorremos o vetor
	for (int i = 0; i < size-1; i++)
	{
		// Pegamos o indice da frente ao que estamos no ciclo do 'for'
		int j = i+1;
		// Salvamos seu valor na variaavel auxiliar
		aux = _vetor[j];
		/*
		* Enquanto 'j' nao for o primeiro valor do vetor
		* e 'aux' for menor que o elemento anterior a 'j'.
		*/
		while ((j > 0) && (aux < _vetor[j-1]))
		{
			// Colocamos os elementos anteriores a 'j' no seu lugar
			_vetor[j] = _vetor[j-1];
			// Voltamos um indice no valor de 'j'
			j--;
		}
		// Colocamos o valor anteriormente salvo na variavel auxiliar no seu devido lugar
		_vetor[j] = aux;
	}
}