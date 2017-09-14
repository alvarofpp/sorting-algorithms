#ifndef __TEST_FILES_H__
#define __TEST_FILES_H__

// Funções que para analisar
enum functions {
	INSERTION_SORT = 0,
	SELECTION_SORT,
	MERGE_SORT,
	HEAPSORT,
	QUICKSORT,
	BUBBLE_SORT,
	SHELLSORT,
	COMB_SORT,
	COCKTAIL_SHAKER_SORT,
	COUNTING_SORT,
	BUCKET_SORT,
	RADIX_SORT
};

// Número de funções que estou analisando
const int NUM_FUN = 4;
// Tamanho inicial dos vetores
const int TAM_INIT = 1;
// Quantidade de testes paa cad função
const size_t QTDE_TESTES = 100;
// Diretório que sairá o arquivo com os resultados dos testes para análise
const std::string DIR_TEST = "test/";

#endif /* __TEST_FILES_H__ */