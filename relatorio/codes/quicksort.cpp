void quicksort ( vector<int> & _vetor, int _left = 0, int _right = -1 )
{
    // Usamos esse 'if' para sabermos se e a primeira vez que o metodo e chamado
    if (_right == -1)
        // Ultimo indice valido do vetor
        _right = _vetor.size()-1;
    // Para caso os indices cheguem a '_left >= _right', pois ai encerrar a funcao do quicksort naquele momento
    if(_left < _right)
    { 
        // Pivo sera o primeiro indice presente na esquerda
        int pivot = _left;
        // Percorremos os valores do '_left'+1 (o elemento a direita do pivo) ate o '_right'
        for (int i = _left + 1; i < _right; i++)
        { 
            /*
            * Se o numero for menor que o elemento presente no indice '_left',
            * realizamos a troca entre esse elemento e o elemento a direita do pivo.
            * Sempre iremos mover o pivo para a direita nesse momento de troca
            * (notar o '++') na esquerda do 'pivot'.
            */
            if (_vetor[i] < _vetor[_left])
                swap( _vetor, i, ++pivot );
        }
        // Realiza troca do primeiro indice presente na esquerda pelo 'pivot'
        swap( _vetor, _left, pivot );
        // Chama os metodos recursivos para os elementos a esquerda e a direita do 'pivot', respectivamente
        quicksort( _vetor, _left, pivot );
        quicksort( _vetor, pivot + 1, _right );
    }   
}