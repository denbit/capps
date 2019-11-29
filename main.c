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
#include "structs.h"
#include <graphics.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>

void setup() {   glClearColor(1.0f, 1.0f, 1.0f, 1.0f); }

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.75f,0.75f, 0.75f, -0.75f);
    glutSwapBuffers();
}

void gl_graph(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(800,600);
    glutCreateWindow("Hello World");

    setup();
    glutDisplayFunc(display);
    glutMainLoop();
}
/*
 * 
 */
int main(int argc, char** argv) {


   const char modules[][20] = {
       {"register_var"},
       {"pointers"},
       {"strings"},
       {"structs"}
   };
    const size_t module_l =  sizeof(modules)/(sizeof(char)*20);
    char opt;
    while (module_l>0&&opt!='0'){
        puts("\nPlease select module you want to run");
        for(short i=0;i<module_l;i++){
            printf("%d) %s;\n",(i+1),modules[i]);
        }
     //   char chouse[]={opt};
    //    puts(chouse);
         
        scanf(" %c",&opt);
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
            case '4':
                structs_test();
                break;
            default:
                puts("For exit press 0");
        }
        puts("Success\n");
    }
    puts("Bye Bye");
    
    return (EXIT_SUCCESS);
}
void graph(void){
    int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
    initgraph(&gd,&gm,NULL);
    rectangle(left, top, right, bottom);
    circle(x, y, radius);
    bar(left + 300, top, right + 300, bottom);
    line(left - 10, top + 150, left + 410, top + 150);
    ellipse(x, y + 200, 0, 360, 100, 50);
    outtextxy(left + 100, top + 325, "C Graphics Program");

    delay(5000);
    closegraph();
}
