/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   staticStack.h
 * Author: a2103303
 *
 * Created on 26 de Março de 2019, 14:52
 */

#ifndef STATICSTACK_H
#define STATICSTACK_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 100

/* tipo abstrato para item, que será inserido na pilha */
typedef struct {
    int key;
    /* podemos adicionar mais coisas aqui */
} Item;

/* tipo abstrato de pilha */
typedef struct {
    Item array[MAXTAM];
    int top;
} StaticStack;

/* funções de manipulação */
void init(StaticStack *pilha){
    pilha->top=0;
}

int isEmpty(StaticStack *pilha){
    if (pilha->top==0){
        return 1;
    }return 0;
}

int isFull(StaticStack *pilha){
    if (pilha->top==MAXTAM){
        return 1;
    }return 0;
}

void push(Item item, StaticStack *pilha){
    pilha->array[pilha->top]=item;
    pilha->top++;
}

void pop(StaticStack *pilha, Item *item){
    if(pilha->top>0){
        
        *item = pilha->array[pilha->top-1]
                pilha->top--;
    }
}

int size(StaticStack *pilha){
    return(pilha->top-1);
}

Item top(StaticStack *pilha){
    return (pilha->array[pilha->top]);
}

void print(StaticStack *pilha){
    for (int i=0; i<pilha->top-1; i++){
        printf("%i", pilha->array[i].key);
    };
}



#ifdef __cplusplus
}
#endif

#endif /* STATICSTACK_H */

