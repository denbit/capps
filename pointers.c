/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pointers.c
 * Author: oo
 * 
 * Created on 5 listopada 2019, 10:45
 */

#include <stdio.h>
#include<string.h>
#include "pointers.h"
// declare function as a param 
void call(int (*func)(char *), char* text){
    func(text);
}

void pointers_test(void){
    /* int pointers*/
    puts("--------------------------\n\n");
    int pointer = -10;
    int * pn = &pointer;
    printf("Variable %+10.5d alias is   %+10.5d\n",pointer,*pn);
    printf("Pointer is  %p alias is %p\n",&pointer,pn);
    
    /* array pointers*/
    puts("--------------------------\n\n");
    int pointer_array[] = {-10,10,9,-9};
    int * pn_array = &pointer_array;
    printf("Variable %+10.5d alias is   %+10.5d\n",pointer_array[1],*(pn_array+1));
    printf("Pointer is  %p alias is %p\n",pointer_array,pn_array);
    
     /* func pointers*/
    puts("--------------------------\n\n");
    int (*pointer_fn)(char *);
    pointer_fn = puts;
    pointer_fn("hello"); //the same
    (*pointer_fn)("hello"); //the same
    call(puts,"hello");
    call(pointer_fn,"hello"); //the same
    call(*pointer_fn,"hello"); //the same
     printf("Pointer is  %p alias is %p\n",puts,pointer_fn);
    
}