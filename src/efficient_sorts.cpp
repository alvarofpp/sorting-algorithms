#include "sort.h"

void quicksort ( vector<int> & _vetor, int _left = 0, int _right = -1 )
{
    // Usamos esse 'if' para sabermos se é a primeira vez que o método é chamado
    if (_right == -1)
        // Último indice válido do vetor
        _right = _vetor.size()-1;
    // Para caso os indices cheguem a '_left >= _right', pois ai encerrar a função do quicksort naquele momento
    if(_left < _right)
    { 
        // Pivô será o primeiro indice presente na esquerda
        int pivot = _left;
        // Percorremos os valores do '_left'+1 (o elemento a direita do pivô) até o '_right'
        for (int i = _left + 1; i < _right; i++)
        { 
            /*
            * Se o número for menor que o elemento presente no índice '_left',
            * realizamos a troca entre esse elemento e o elemento a direita do pivô.
            * Sempre iremos mover o pivô para a direita nesse momento de troca
            * (notar o '++') na esquerda do 'pivot'.
            */
            if (_vetor[i] < _vetor[_left])
                swap( _vetor, i, ++pivot );
        }
        // Realiza troca do primeiro indice presente na esquerda pelo 'pivot'
        swap( _vetor, _left, pivot );
        // Chama os métodos recursivos para os elementos a direita e a esquerda do 'pivot', respectivamente
        quicksort( _vetor, _left, pivot );
        quicksort( _vetor, pivot + 1, _right );
    }   
}

void merge ( vector<int> & _vetor, size_t _left, size_t _middle, size_t _right )
{
    // Tamanhos do vetor pai, vetor da esquerda e vetor da direita, respectivamente
    // Final - inicial + 1
    size_t len_A = _right  - _left + 1; 
    // Meio - inicial + 1
    size_t len_L = _middle - _left + 1;
    // Todo - Tamanho do vetor da esquerda
    size_t len_R = len_A - len_L;

    // Vetores auxiliares, para os elementos da esquerda e da direita, respectivamente
    int *L = new int[ len_L ];
    int *R = new int[ len_R ];

    // Copiar os elementos de cada metade para seus respectivos vetores auxiliares.
    std::copy( _vetor.begin() + _left,         _vetor.begin() + (_middle + 1), L );
    std::copy( _vetor.begin() + (_middle + 1), _vetor.begin() + (_right + 1),  R );

    // Contadores de cada vetor
    size_t i = 0; // Associado ao L
    size_t j = 0; // Associado ao R
    size_t k = _left; // Associado ao A

    /*
    * Sobrescreve os elementos do vetor pai com o menor elemento encontrado
    * em um dos dois vetores auxiliares
    */
    while( i < len_L and j < len_R )
        _vetor[k++] = ( L[i] < R[j] ) ? L[i++] : R[j++];

    // Após terminar um dos vetores auxiliares, falta o restante dos elementos do outro vetor
    if ( i < len_L )
        std::copy( L+i, L+len_L, _vetor.begin()+k ); // Copie o que sobrou de L.
    else
        std::copy( R+j, R+len_R, _vetor.begin()+k ); // Copie o que sobrou de R.

    // Libera a memória usada nos vetores auxiliares.
    delete [] L;
    delete [] R;
}

void merge_sort ( vector<int> & _vetor, int _left = 0, int _right = -1 )
{
    // Usamos esse 'if' para sabermos se é a primeira vez que o método é chamado
    if (_right == -1)
        // Último indice válido do vetor
        _right = _vetor.size()-1;

    // Caso base: ainda tem pelo menos 2 elementos pra ordenar.
    if ( _left < _right )
    {
        // Elemento do meio, para dividir as metades.
        int m = ( _left + _right ) / 2;
        // Chama recursivamente o método para a primeira metade do vetor e depois para a segunda metade
        merge_sort( _vetor, _left, m );
        merge_sort( _vetor, m+1, _right );
        // Realiza a operação de junção das duas partes
        merge( _vetor, _left, m, _right );
    }
}