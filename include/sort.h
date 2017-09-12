#ifndef __SORT_H__
#define __SORT_H__

#include <iostream>     // std::cout
#include <iterator>     // std::ostream_iterator
#include <vector>       // std::vector

void print_array ( std::vector< int > _vetor );

/*
* Sorting functions
*/

// Simple sorts
/*
* void insertion_sort ( std::vector< int > & _vetor );
*/
void selection_sort ( std::vector< int > & _vetor );
// Efficient sorts
/*
* void merge_sort ( std::vector< int > & _vetor );
* void heapsort ( std::vector< int > & _vetor );
* void quicksort ( std::vector< int > & _vetor );
*/
// Bubble sort and variants
void bubble_sort ( std::vector< int > & _vetor );
/*
* void shellsort ( std::vector< int > & _vetor );
* void comb_sort ( std::vector< int > & _vetor );
* void cocktail_shaker_sort ( std::vector< int > & _vetor );
*/
// Distribution sort
/*
* void counting_sort ( std::vector< int > & _vetor );
* void bucket_sort ( std::vector< int > & _vetor );
* void radix_sort ( std::vector< int > & _vetor );
*/

#endif /* __SORT_H__ */