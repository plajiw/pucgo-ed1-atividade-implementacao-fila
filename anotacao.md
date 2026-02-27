# Filas - Queue

## Definição

São estruturas de dados do tipo FIFO (first-in first-out).

## Estrutura da fila

```md

[1] [2] [3] [4] [5] [6] [7] [8]
HEAD                        TAIL

```

No mídio dois ponteiros: HEAD e TAIL

Um ponteiro para o head e tail da estrutura, enquanto a pilha apresenta somente uma.

São exemplos controle de documentos para impressão
Troca de mensagem entre computadores numa rede
Buffer de gravação de dados em mídia
Processos prioridade
Ordenação do ecnaminhamento de pacotes em processo de roteador

## Operações

- Criação
- Destruição
- Impressão
- Verificar se está cheio/vazio
- Inserir elemento (final da fila) - Enfileirar
- Remover elemento (inicio da fila) - Desenfileirar
- Localizar elemento
- Ordencalçao da fila
- Concatenação de fila
- Divisao de filas

## Exemplo

```c

// Estrutura

typedef struct queue
{
    int *head, tail;
    int size;
    int max;
} Queue;

// Funções

void initQueue(int n);
void destroyQueue();
bool isEmpty();
int indexElement(int item);
int firstElement();
void dequeue();
void eraseQueue()
void enqueue(int item)
void printQueue();

```

para init head e tail são nulos

### para o enqueue / insert, vai inserir um valor e utilziar um ponteiro

1° alocar um node

2° head -> node e tail -> node

3° se nn esiver vazio novo node tail -> node

4° tail receber novo

### para dequeue ou popHead

1° verifica se está vazia

2°se nn está vazia remove do front, mas tem que olhar o próximo

3° Criar um aux que aponta para head -> next

4° free head

5° front recebe aux

### Fila vazia

se tamanho == 0 é vazia