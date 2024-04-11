#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir o tamanho
#define MAX_SIZE 100

// Estrutura para representar um livro
typedef struct {
    char title[100];
} Book;

// Estrutura para representar uma fila de livros
typedef struct {
    Book items[MAX_SIZE];
    int front, rear;
} Queue;

// Estrutura para representar uma pilha de livros
typedef struct {
    Book items[MAX_SIZE];
    int top;
};

// Função para inicializar uma filas
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Função para verificar se a fila está vazia
int isQueueEmpty(Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

// Função para enfileirar um livro
void enqueue(Queue *q, Book book) {
    if ((q->rear +1) % MAX_SIZE == q->front) {
         printf("Queue is full.\n");
         return;
    } else if (isQueueEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % MAX_SIZE;
    }
    q->items[q->rear] = book;
}

// Função para desenfileirar um livro

// Função para inicializar uma pilha

// Função para verificar se a pilha está vazia

// Função para empilhar um livro

// Função para desempilhar um livro


int main() {

}