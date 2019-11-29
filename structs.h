/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   structs.h
 * Author: oo
 *
 * Created on 28 listopada 2019, 18:32
 */

#ifndef STRUCTS_H
#define STRUCTS_H
struct address {
    char street[255];
    unsigned short building;
    unsigned short app;
};



//   what to redefine  to what
typedef struct address addr;//named struct type def

typedef struct {
    char city[255];
    unsigned short code;
} region;

typedef struct {
    char *charry;
} CharPointer;

typedef struct {
    char charry[10];
} CharArray;
typedef struct {
    signed char sz;
    char *name;
} some;
void structs_test(void);
void struct_func(some ,some *);
#endif /* STRUCTS_H */
