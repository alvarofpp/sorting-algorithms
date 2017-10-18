void new_numbers (vector<int> & _vetor, size_t _num )
{
	// Insere novos numeros aleatorios de 0 a '_num'
	for (size_t i = 0; i < _num; i++)
		_vetor[i] = rand() % _num;
	// Verifica se os elementos do vetor estao realmente aleatorios
	bool verify = verify_order(_vetor, ALEATORIO);
	// Se nao estiverem e o vetor tiver mais de 2 elementos, ele chama novamente a funcao
	if (_num > 2 && !verify)
		new_numbers(_vetor, _num);
}

bool verify_order ( vector<int> & _vetor, int _order )
{
	// Verifica se os elementos do vetor estao em ordem crescente
	if (_order == CRESCENTE)
	{
		for (size_t i = 0; i < _vetor.size()-1; i++)
			if (_vetor[i] > _vetor[i+1]) return false;
	}
	// Verifica se os elementos do vetor estao em ordem decrescente
	else if (_order == DECRESCENTE)
	{
		for (size_t i = 0; i < _vetor.size()-1; i++)
			if (_vetor[i] < _vetor[i+1]) return false;
	}
	// Verifica se os elementos do vetor sao realmente aleatorios
	else
	{
		if (verify_order(_vetor, CRESCENTE) || verify_order(_vetor, DECRESCENTE))
			return false;
	}
	
	return true;
}