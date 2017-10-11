#ifndef __SORT_H__
#define __SORT_H__

#include <vector>
#include <iostream>
#include <iterator>     // std::ostream_iterator

// vector
using std::vector;

// iostream
using std::cout;
using std::endl;
using std::cin;

/*
* General functions
*/
bool verify_order ( vector<int> & _vetor, int _order );
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
/*
* void shell_sort ( std::vector<int> & _vetor );
*/

// Efficient sorts
void quicksort ( vector<int> & _vetor, int _left, int _right );
/*
* void merge_sort ( std::vector<int> & _vetor );
*/

// Distribution sort
// void radix_sort ( vector<int> & _vetor );

#endif /* __SORT_H__ */