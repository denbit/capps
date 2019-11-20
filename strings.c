/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   strings.c
 * Author: oo
 * 
 * Created on 14 November 2019, 4:21 PM
 */

#include <string.h>

#include "strings.h"
void strings_test(void){
    char source[SIZE], dest[SIZE];
    memset(dest,'\0',SIZE-1);
    unsigned short trim=0;
    puts("should I trim to some size?(0 - No, Any other as length )");
    scanf("%u", &trim);
    puts("Enter source string");
    scanf("%50s", &source);
    puts(source);
    if( trim == 0  || strlen(source) < trim){
       strcpy(dest, source);
        puts(dest);
    } else {
        strncpy(dest, source, trim);
       // dest[trim]='\0';
        puts(dest);
        printf("trimmed to size %d\n",trim);
    }
   
  
    
}