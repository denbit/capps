/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: oo
 *
 * Created on 22 sierpnia 2019, 10:56
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "register_var.h"
#include "pointers.h"
#include "strings.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    const short module_l = 3;
   const char modules[][20] = {
       {"register_var"},
       {"pointers"},
       {"strings"}
   };
    char opt;
    while (module_l>0&&opt!='0'){
        puts("\nPlease select module you want to run");
        for(short i=0;i<module_l;i++){
            printf("%d) %s;\n",(i+1),modules[i]);
        }
        opt = getchar();
        getchar();
        switch(opt){
            case '1': 
                register_var_test();
                break;
            case '2':
                pointers_test();
                break;
            case '3':
                strings_test();
                break;
            default:
                puts("For exit press 0");
        }
        puts("Success\n");
    }
    puts("Bye Bye");
    
    return (EXIT_SUCCESS);
}

