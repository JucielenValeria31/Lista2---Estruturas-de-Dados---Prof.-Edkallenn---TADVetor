/* 
**    Função : Testar TAD Vetor de Inteiros
**    Autor : Jucieélen Valéria Souza
**    Turma : P2 A
**    Data  : 07/06/2025
**    Observações: Arquivo de teste das funções do vetor
*/

#include <stdio.h>
#include "vetor.h"

int main() {
    Vetor* v = criarVetor(5);

    inserirElemento(v, 10);
    inserirElemento(v, 20);
    inserirElemento(v, 30);
    imprimirVetor(v);

    removerElemento(v, 20);
    imprimirVetor(v);

    int valor = consultarElemento(v, 1);
    printf("Elemento na posição 1: %d\n", valor);

    liberarVetor(v);

    return 0;
}
