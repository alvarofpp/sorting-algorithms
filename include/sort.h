#ifndef __SORT_H__
#define __SORT_H__

#include <vector>
#include <iostream>
#include <iterator>     // std::ostream_iterator
#include <algorithm>    // std::min_element, std::max_element
#include <cmath>        // pow
#include <string>

// string
using std::string;

// vector
using std::vector;

// iostream
using std::cout;
using std::endl;
using std::cin;

// algorithm
using std::max_element;

/*
* General functions
*/
void print_array ( vector<int> & _vetor );
void swap ( vector<int> & _vetor, int _left, int _right );

/*
* Sorting functions
*/
// Simple sorts
void insertion_sort ( vector<int> & _vetor, int _left, int _right );
void selection_sort ( vector<int> & _vetor, int _left, int _right );

// Bubble sort and variants
void bubble_sort ( vector<int> & _vetor, int _left, int _right );
void shell_sort ( std::vector<int> & _vetor, int _left, int _right );

// Efficient sorts
void quicksort ( vector<int> & _vetor, int _left, int _right );
void merge ( vector<int> & _vetor, size_t _left, size_t _middle, size_t _right );
void merge_sort ( vector<int> & _vetor, int _left, int _right );

// Distribution sort
void radix_sort ( vector<int> & _vetor, int _left, int _right );



/*********
* TESTES *
*********/
// Casos que para analisar
enum casos
{
	ALEATORIO = 0,
	CRESCENTE,
	DECRESCENTE
};

// Número de funções que estou analisando
const int NUM_FUN = 7;
// Tamanho inicial dos vetores
const int TAM_INIT = 0;
// Quantidade de testes para cada função
const size_t QTDE_TESTES = 38;
const size_t testes[QTDE_TESTES] = {
	1, 10, 20, 30, 40, 50, 60, 70, 80, 90, 
	100, 200, 300, 400, 500, 600, 700, 800, 900, 
	1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 
	10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000
};
// Quantidade de testes realizados para tirar a média em cada função
const size_t QTDE_MEDIA = 50;
// Quantidade de casos realizados para cada tamanho de vetor
const size_t QTDE_CASOS = 3;
// Diretório que sairá o arquivo com os resultados dos testes para análise
const string DIR_TEST = "test/";

// Verificar a ordem do vector
void new_numbers ( vector<int> & _vetor, size_t _num );
bool verify_order ( vector<int> & _vetor, int _order );

#endif /* __SORT_H__ */