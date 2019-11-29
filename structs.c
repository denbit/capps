/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   structs.c
 * Author: oo
 * 
 * Created on 28 listopada 2019, 18:32
 */

#include "structs.h"
#include <stdio.h>
#include <string.h>

void structs_test(void) {
    addr dd; //using typdef

    struct address *pd = &dd; //adress to named struct alt: addr *
    addr *second_pntr = &dd;
    dd.app = 1;
    pd->building = 3;
    second_pntr->app = 2;
    memset(pd->street, '\0', sizeof(pd->street));
    strcpy(pd->street, "premo");
    puts(pd->street);


    region kh = {"kharkiv", 25}; //using typdef and init

    puts(kh.city);

    CharPointer state = {"Ukraine"}; //using typdef and pointer field

    CharArray stateTwo = {"USA"}; //using typdef and array field
    puts(state.charry);
    puts(stateTwo.charry);
    state.charry = "UK";
    stateTwo.charry[0] = 'P';
    stateTwo.charry[1] = 'e';
    stateTwo.charry[2] = 'r';
    stateTwo.charry[3] = 'u';
    stateTwo.charry[4] = '\0';
    puts(state.charry);
    puts(stateTwo.charry);
    CharArray states[2] = {"elngland", "turke"};

    some arrTest[3] = {1, "bv", 1, "bz"};
    some arrTest2[3] = {{1, "bv"},
                        {1, "bz"},
                        {1, "bz"}};
    struct_func(arrTest[0], &arrTest[1]); //passing by value and by reference
}

void struct_func(some arr, some * arr2) {
puts(arr.name);//passing by value
puts(arr2->name);//passing by reference
}