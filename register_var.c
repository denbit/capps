/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <time.h>
#include "register_var.h"

time_t timer;
void * p;
void init_timer(){    
     timer = clock();
} 

void print_diff(void) {
    double diff = clock()-timer;
    printf("%f \n",diff);    
}

void register_var_test(void) {
    puts("register var");
    init_timer();
    register long reg =0;
    for(long i=9000000000; i>reg;reg++);
    print_diff();
    puts("regular var");        
    init_timer();
    long nonreg =0;
    for(long ireg=9000000000; ireg>nonreg; nonreg++);
    print_diff();        
}