#ifndef __TEST_FILES_H__
#define __TEST_FILES_H__

#include <cmath>
#include <string>

// string
using std::string;

// Funções que para analisar
enum functions
{
	INSERTION_SORT = 0,
	SELECTION_SORT,
	BUBBLE_SORT,
	SHELL_SORT,
	QUICKSORT,
	MERGE_SORT,
	RADIX_SORT
};

// Casos que para analisar
enum casos
{
	ALEATORIO = 0,
	ORDENADO,
	ORDENADO_INVERSO
};

typedef void (*Sorting)( vector<int> & _vetor, int _left, int _right );
Sorting sorting[] = 
{
	insertion_sort,
	selection_sort,
	bubble_sort,
	// shell_sort,
	// merge_sort,
	quicksort
	// radix_sort
};

// Número de funções que estou analisando
const int NUM_FUN = 4;
// Tamanho inicial dos vetores
const int TAM_INIT = 2;
// Quantidade de testes para cada função
const size_t QTDE_TESTES = pow(2, 10);
// Quantidade de testes realizados para tirar a média em cada função
const size_t QTDE_MEDIA = 50;
// Quantidade de casos realizados para cada tamanho de vetor
const size_t QTDE_CASOS = 3;
// Diretório que sairá o arquivo com os resultados dos testes para análise
const string DIR_TEST = "test/";

#endif /* __TEST_FILES_H__ */