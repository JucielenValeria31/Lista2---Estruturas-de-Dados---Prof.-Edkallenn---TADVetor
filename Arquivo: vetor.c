/* 
**    Função : Implementação do TAD Vetor de Inteiros
**    Autor : Jucieélen Valéria Souza 
**    Turma : P2 A
**    Data  : 07/06/2025
**    Observações: Implementação das funções do vetor
*/

#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

Vetor* criarVetor(int capacidade) {
    Vetor* v = (Vetor*) malloc(sizeof(Vetor));
    v->dados = (int*) malloc(capacidade * sizeof(int));
    v->tamanho = 0;
    v->capacidade = capacidade;
    return v;
}

void inserirElemento(Vetor* v, int elemento) {
    if (v->tamanho < v->capacidade) {
        v->dados[v->tamanho++] = elemento;
    } else {
        printf("Vetor cheio! Não é possível inserir.\n");
    }
}

void removerElemento(Vetor* v, int elemento) {
    int i, j, encontrado = 0;
    for (i = 0; i < v->tamanho; i++) {
        if (v->dados[i] == elemento) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        for (j = i; j < v->tamanho - 1; j++) {
            v->dados[j] = v->dados[j + 1];
        }
        v->tamanho--;
        printf("Elemento %d removido.\n", elemento);
    } else {
        printf("Elemento %d não encontrado.\n", elemento);
    }
}

int consultarElemento(Vetor* v, int posicao) {
    if (posicao >= 0 && posicao < v->tamanho) {
        return v->dados[posicao];
    } else {
        printf("Posição inválida.\n");
        return -1;
    }
}

void imprimirVetor(Vetor* v) {
    printf("Vetor: ");
    for (int i = 0; i < v->tamanho; i++) {
        printf("%d ", v->dados[i]);
    }
    printf("\n");
}

void liberarVetor(Vetor* v) {
    free(v->dados);
    free(v);
}
