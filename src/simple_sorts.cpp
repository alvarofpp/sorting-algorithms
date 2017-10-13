#include "sort.h"

void insertion_sort ( vector<int> & _vetor, int _left = 0, int _right = 0 )
{
	// Tamanho do vetor
	int size = _vetor.size();
	// Variável auxiliar
	int aux;

	// Percorremos o vetor
	for (int i = 0; i < size-1; i++)
	{
		// Pegamos o indice da frente ao que estamos no ciclo do 'for'
		int j = i+1;
		// Salvamos seu valor na variável auxiliar
		aux = _vetor[j];
		/*
		* Enquanto 'j' não for o primeiro valor do vetor
		* e 'aux' for menor que o elemento anterior a 'j'.
		*/
		while ((j > 0) && (aux < _vetor[j-1]))
		{
			// Colocamos os elementos anteriores a 'j' em seu lugar
			_vetor[j] = _vetor[j-1];
			// Voltamos um indice no valor de 'j'
			j--;
		}
		// Colocamos o valor anteriormente salvo na variável auxiliar no seu devido lugar
		_vetor[j] = aux;
	}
}

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
		* Começamos do elemento 'i', pois sempre iremos garantir que os elementos menor que 'i' estejam já ordenados.
		* Logo não é necessário percorrer eles nesse segundo 'for'
		*/
		for (int j = i; j < size; j++)
		{
			// Se for o primeiro indice verificado desse novo for, salva ele como o menor valor até então
			if (i == j)
			{
				menor = j;
				continue;
			}
			/*
			* Compara se o valor verificado é menor que o menor valor registrado.
			* Se for, salva o novo indice do menor valor
			*/
			if (_vetor[menor] > _vetor[j])
				menor = j;
		}
		// Realiza a troca
		swap( _vetor, menor, i );
	}
}