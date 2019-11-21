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
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#include "strings.h"

void strings_test(void){
    char source[SIZE], dest[SIZE];
    memset(dest,'\0',SIZE-1);
    unsigned short trim=0;
    puts("should I trim to some size?(0 - No, Any other as length )");
   // scanf("%u", &trim);
    trim= atoi("5");
    puts("0");
    puts("Enter source string");
    //scanf("%50s", &source);
    strcpy(source,"new string for search now i can serach everything");
    puts(source);
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
    puts("testing concat");
    strcat(dest,source);
    printf(" result is %50s\n", dest);
     strncat(dest,source+1,strlen(source)-2);
    printf(" result is %50s\n", dest);
    char str[] = " new string for search now i can serach everything";
    char *p;
      if ((p = strstr(str,"serach"))!=NULL){
          printf("the pointer is %p its value is %s\n",p,p );
      }
      else{
          puts("nothing is found!");
      }
    for (int i=0; i<strlen(p); i++){
        if( isalpha(p[i])){
            if (isupper(p[i])){
                p[i]=tolower(p[i]);
            }else{
                p[i]=toupper(p[i]);
            }
        }
    }
    puts(p);
    puts(itoa(54));
  
    
}

char * itoa(int num){
    char * string = malloc((sizeof (char) *(1+ (int)log10(num))));
    sprintf(string,"%d",num);
    return string;
}
