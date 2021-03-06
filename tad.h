/*
*       Autores:
*       Luís Marcello da Silva
*       Gustavo Molina
*       Gabriel Vinícius
*       Pedrenrique G. Guimarães
*/

#include <stdio.h>
#include <stdlib.h>

struct proc {
    int ID;
    struct proc *pilha;
    int status;
} Processos;

struct filaJob {
    struct filaJob *inicio;
    struct filaJob *fim;
} FilaJob;

struct filaExec {
    struct filaExec *inicio;
    struct filaExec *fim;
} FilaExec;

struct filaPronto {
    struct filaPronto *inicio;
    struct filaPronto *fim;
} FilaPronto;


/*Protótipo para criação das estruturas*/
Processos *cria_pilha(); //TALVEZ SEJA DESNECESSÁRIO CRIAR ESSA PILHA
FilaJob *cria_fila_job();
FilaExec *cria_fila_exec();
FilaPronto *cria_fila_pronto();

/*Algoritmos de seleção*/
FilaJob *Algoritmo_RR(FilaJob a);
