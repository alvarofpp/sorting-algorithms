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