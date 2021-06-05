
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


void display();
void specialKeys();


double move_y=2.3;
double move_y2=0.8;
double move_y3=1.5;
double move_y4=0.5;
double move_y5=0;
double move_y6=0.5;
double move_y7=1.0;
double move_y8=1.5;
double move_y9=2.0;
double move_y10=2.0;
double move_y11=2.5;

double move_x=0;
double move_yn=0;




void display(){

  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

//Main racing car
glPushMatrix();

  glTranslatef( move_x, 0.0, 0.0 );
  glTranslatef( 0.0, move_yn , 0.0 );
  glLineWidth(10);
    glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.05,-0.4);
	glVertex2d(0.05,-0.4);
	glVertex2d(0.05,-0.5);
	glVertex2d(-0.05,-0.5);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.55,0.47,0.14);
    glVertex2d(-0.05,-0.4);
	glVertex2d(0.05,-0.4);
	glVertex2d(0.05,-0.5);
	glVertex2d(-0.05,-0.5);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.1,-0.55);
	glVertex2d(0.1,-0.55);
	glVertex2d(0.1,-0.65);
	glVertex2d(-0.1,-0.65);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2d(-0.1,-0.55);
	glVertex2d(0.1,-0.55);
	glVertex2d(0.1,-0.65);
	glVertex2d(-0.1,-0.65);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.1,-0.70);
	glVertex2d(0.1,-0.70);
	glVertex2d(0.1,-0.80);
	glVertex2d(-0.1,-0.80);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.55,0.47,0.14);
    glVertex2d(-0.1,-0.70);
	glVertex2d(0.1,-0.70);
	glVertex2d(0.1,-0.80);
	glVertex2d(-0.1,-0.80);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.08,-0.4);
	glVertex2d(-0.10,-0.4);
	glVertex2d(-0.10,-0.5);
	glVertex2d(-0.08,-0.5);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.08,-0.4);
	glVertex2d(-0.10,-0.4);
	glVertex2d(-0.10,-0.5);
	glVertex2d(-0.08,-0.5);
    glEnd();



 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.10,-0.4);
	glVertex2d(0.08,-0.4);
	glVertex2d(0.08,-0.5);
	glVertex2d(0.10,-0.5);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0.10,-0.4);
	glVertex2d(0.08,-0.4);
	glVertex2d(0.08,-0.5);
	glVertex2d(0.10,-0.5);
    glEnd();


glPopMatrix();

//First enemy vehicle

glPushMatrix();
  glTranslatef( 0.0, move_y , 0.0 );

 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.33,-0.4);
	glVertex2d(-0.27,-0.4);
	glVertex2d(-0.27,-0.5);
	glVertex2d(-0.33,-0.5);
	glEnd();
    glBegin(GL_POLYGON);

	glColor3f(0.46 ,0.25, 0.20);
    glVertex2d(-0.33,-0.4);
	glVertex2d(-0.27,-0.4);
	glVertex2d(-0.27,-0.5);
	glVertex2d(-0.33,-0.5);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.4,-0.55);
	glVertex2d(-0.2,-0.55);
	glVertex2d(-0.2,-0.65);
	glVertex2d(-0.4,-0.65);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(-0.4,-0.55);
	glVertex2d(-0.2,-0.55);
	glVertex2d(-0.2,-0.65);
	glVertex2d(-0.4,-0.65);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.33,-0.70);
	glVertex2d(-0.27,-0.70);
	glVertex2d(-0.27,-0.80);
	glVertex2d(-0.33,-0.80);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.46 ,0.25, 0.20);
    glVertex2d(-0.33,-0.70);
	glVertex2d(-0.27,-0.70);
	glVertex2d(-0.27,-0.80);
	glVertex2d(-0.33,-0.80);
	glEnd();

//wheels

 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.38,-0.4);
	glVertex2d(-0.35,-0.4);
	glVertex2d(-0.35,-0.5);
	glVertex2d(-0.38,-0.5);
	glEnd();

 	glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.38,-0.4);
	glVertex2d(-0.35,-0.4);
	glVertex2d(-0.35,-0.5);
	glVertex2d(-0.38,-0.5);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.38,-0.7);
	glVertex2d(-0.35,-0.7);
	glVertex2d(-0.35,-0.8);
	glVertex2d(-0.38,-0.8);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.38,-0.7);
	glVertex2d(-0.35,-0.7);
	glVertex2d(-0.35,-0.8);
	glVertex2d(-0.38,-0.8);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.25,-0.4);
	glVertex2d(-0.22,-0.4);
	glVertex2d(-0.22,-0.5);
	glVertex2d(-0.25,-0.5);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.25,-0.4);
	glVertex2d(-0.22,-0.4);
	glVertex2d(-0.22,-0.5);
	glVertex2d(-0.25,-0.5);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.25,-0.7);
	glVertex2d(-0.22,-0.7);
	glVertex2d(-0.22,-0.8);
	glVertex2d(-0.25,-0.8);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.25,-0.7);
	glVertex2d(-0.22,-0.7);
	glVertex2d(-0.22,-0.8);
	glVertex2d(-0.25,-0.8);
    glEnd();

glPopMatrix();


//second enemy vehicle
glPushMatrix();
  glTranslatef( 0.0, move_y2 , 0.0 );

 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.43,-0.3);
	glVertex2d(-0.37,-0.3);
	glVertex2d(-0.37,-0.4);
	glVertex2d(-0.43,-0.4);
    glEnd();


 	glBegin(GL_POLYGON);
    glColor3f(0.0 ,0.25, 0.20);
    glVertex2d(-0.43,-0.3);
	glVertex2d(-0.37,-0.3);
	glVertex2d(-0.37,-0.4);
	glVertex2d(-0.43,-0.4);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.5,-0.45);
	glVertex2d(-0.3,-0.45);
	glVertex2d(-0.3,-0.55);
	glVertex2d(-0.5,-0.55);
	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(-0.5,-0.45);
	glVertex2d(-0.3,-0.45);
	glVertex2d(-0.3,-0.55);
	glVertex2d(-0.5,-0.55);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.43,-0.6);
	glVertex2d(-0.37,-0.6);
	glVertex2d(-0.37,-0.7);
	glVertex2d(-0.43,-0.7);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0 ,0.25, 0.20);
    glVertex2d(-0.43,-0.6);
	glVertex2d(-0.37,-0.6);
	glVertex2d(-0.37,-0.7);
	glVertex2d(-0.43,-0.7);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.48,-0.3);
	glVertex2d(-0.45,-0.3);
	glVertex2d(-0.45,-0.4);
	glVertex2d(-0.48,-0.4);
    glEnd();

 	glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.48,-0.3);
	glVertex2d(-0.45,-0.3);
	glVertex2d(-0.45,-0.4);
	glVertex2d(-0.48,-0.4);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.48,-0.6);
	glVertex2d(-0.45,-0.6);
	glVertex2d(-0.45,-0.7);
	glVertex2d(-0.48,-0.7);
    glEnd();

 	glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.48,-0.6);
	glVertex2d(-0.45,-0.6);
	glVertex2d(-0.45,-0.7);
	glVertex2d(-0.48,-0.7);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.35,-0.3);
	glVertex2d(-0.32,-0.3);
	glVertex2d(-0.32,-0.4);
	glVertex2d(-0.35,-0.4);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.35,-0.3);
	glVertex2d(-0.32,-0.3);
	glVertex2d(-0.32,-0.4);
	glVertex2d(-0.35,-0.4);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(-0.35,-0.6);
	glVertex2d(-0.32,-0.6);
	glVertex2d(-0.32,-0.7);
	glVertex2d(-0.35,-0.7);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(-0.35,-0.6);
	glVertex2d(-0.32,-0.6);
	glVertex2d(-0.32,-0.7);
	glVertex2d(-0.35,-0.7);
    glEnd();

glPopMatrix();



//Third enemy vehicle
glPushMatrix();
  glTranslatef( 0.0, move_y3 , 0.0 );

    glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.15,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.3);
	glVertex2d(0.15,0.3);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0 ,0.25, 0.20);
    glVertex2d(0.15,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.3);
	glVertex2d(0.15,0.3);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.15,0.35);
	glVertex2d(0.05,0.35);
	glVertex2d(0.05,0.45);
	glVertex2d(0.15,0.45);
	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(0.15,0.35);
	glVertex2d(0.05,0.35);
	glVertex2d(0.05,0.45);
	glVertex2d(0.15,0.45);
	glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.15,0.50);
	glVertex2d(0.05,0.50);
	glVertex2d(0.05,0.60);
	glVertex2d(0.15,0.60);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0 ,0.25, 0.20);
    glVertex2d(0.15,0.50);
	glVertex2d(0.05,0.50);
	glVertex2d(0.05,0.60);
	glVertex2d(0.15,0.60);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0,0.50);
	glVertex2d(0.03,0.50);
	glVertex2d(0.03,0.60);
	glVertex2d(0,0.60);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0,0.50);
	glVertex2d(0.03,0.50);
	glVertex2d(0.03,0.60);
	glVertex2d(0,0.60);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0,0.2);
	glVertex2d(0.03,0.2);
	glVertex2d(0.03,0.3);
	glVertex2d(0,0.3);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0,0.2);
	glVertex2d(0.03,0.2);
	glVertex2d(0.03,0.3);
	glVertex2d(0,0.3);
	glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.17,0.50);
	glVertex2d(0.2,0.50);
	glVertex2d(0.2,0.60);
	glVertex2d(0.17,0.60);
	glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0.17,0.50);
	glVertex2d(0.2,0.50);
	glVertex2d(0.2,0.60);
	glVertex2d(0.17,0.60);
	glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.17,0.2);
	glVertex2d(0.2,0.2);
	glVertex2d(0.2,0.3);
	glVertex2d(0.17,0.3);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0.17,0.2);
	glVertex2d(0.2,0.2);
	glVertex2d(0.2,0.3);
	glVertex2d(0.17,0.3);
	glEnd();

glPopMatrix();


//Fourth enemy vehicle

glPushMatrix();
  glTranslatef( 0.0, move_y4 , 0.0 );

 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.45,0.2);
	glVertex2d(0.55,0.2);
    glVertex2d(0.55,0.3);
	glVertex2d(0.45,0.3);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.46 ,0.25, 0.20);
    glVertex2d(0.45,0.2);
	glVertex2d(0.55,0.2);
    glVertex2d(0.55,0.3);
	glVertex2d(0.45,0.3);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.45,0.35);
	glVertex2d(0.55,0.35);
    glVertex2d(0.55,0.45);
	glVertex2d(0.45,0.45);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(0.45,0.35);
	glVertex2d(0.55,0.35);
    glVertex2d(0.55,0.45);
	glVertex2d(0.45,0.45);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.45,0.50);
	glVertex2d(0.55,0.50);
    glVertex2d(0.55,0.60);
	glVertex2d(0.45,0.60);
    glEnd();


    glColor3f(0.46 ,0.25, 0.20);
    glBegin(GL_POLYGON);
    glVertex2d(0.45,0.50);
	glVertex2d(0.55,0.50);
    glVertex2d(0.55,0.60);
	glVertex2d(0.45,0.60);
    glEnd();



 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.43,0.50);
	glVertex2d(0.40,0.50);
    glVertex2d(0.40,0.60);
	glVertex2d(0.43,0.60);
    glEnd();



    glBegin(GL_POLYGON);
	glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0.43,0.50);
	glVertex2d(0.40,0.50);
    glVertex2d(0.40,0.60);
	glVertex2d(0.43,0.60);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.43,0.2);
	glVertex2d(0.40,0.2);
    glVertex2d(0.40,0.3);
	glVertex2d(0.43,0.3);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0.43,0.2);
	glVertex2d(0.40,0.2);
    glVertex2d(0.40,0.3);
	glVertex2d(0.43,0.3);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.57,0.50);
	glVertex2d(0.60,0.50);
    glVertex2d(0.60,0.60);
	glVertex2d(0.57,0.60);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0.57,0.50);
	glVertex2d(0.60,0.50);
    glVertex2d(0.60,0.60);
	glVertex2d(0.57,0.60);
    glEnd();


 	glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2d(0.57,0.2);
	glVertex2d(0.60,0.2);
    glVertex2d(0.60,0.3);
	glVertex2d(0.57,0.3);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2d(0.57,0.2);
	glVertex2d(0.60,0.2);
    glVertex2d(0.60,0.3);
	glVertex2d(0.57,0.3);
    glEnd();


glPopMatrix();



//road middle lines
glPushMatrix();
  glTranslatef( 0.0, move_y5 , 0.0 );

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-0.05,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.5);
	glVertex2d(-0.05,0.5);
    glEnd();

glPopMatrix();

glPushMatrix();
  glTranslatef( 0.0, move_y6 , 0.0 );
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-0.05,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.5);
	glVertex2d(-0.05,0.5);
    glEnd();
glPopMatrix();


glPushMatrix();
  glTranslatef( 0.0, move_y7 , 0.0 );

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-0.05,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.5);
	glVertex2d(-0.05,0.5);
    glEnd();

glPopMatrix();

glPushMatrix();
  glTranslatef( 0.0, move_y8 , 0.0 );

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-0.05,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.5);
	glVertex2d(-0.05,0.5);
    glEnd();
glPopMatrix();


glPushMatrix();
  glTranslatef( 0.0, move_y9 , 0.0 );

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-0.05,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.5);
	glVertex2d(-0.05,0.5);
    glEnd();

glPopMatrix();



glPushMatrix();
  glTranslatef( 0.0, move_y10 , 0.0 );

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-0.05,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.5);
	glVertex2d(-0.05,0.5);
    glEnd();

glPopMatrix();



glPushMatrix();
  glTranslatef( 0.0, move_y11 , 0.0 );

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-0.05,0.2);
	glVertex2d(0.05,0.2);
	glVertex2d(0.05,0.5);
	glVertex2d(-0.05,0.5);
    glEnd();

glPopMatrix();

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(0.6,1.0);
    glVertex2d(0.6,-1.0);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(0.7,1.0);
    glVertex2d(0.7,-1.0);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(-0.6,1.0);
    glVertex2d(-0.6,-1.0);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2d(-0.7,1.0);
    glVertex2d(-0.7,-1.0);
    glEnd();

//Letters

    //G
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-0.8,0.9);
    glVertex2d(-0.9,0.9);
    glVertex2d(-0.9,0.9);
    glVertex2d(-0.9,0.6);
    glVertex2d(-0.8,0.6);
    glVertex2d(-0.9,0.6);
    glVertex2d(-0.8,0.6);
    glVertex2d(-0.8,0.75);
    glVertex2d(-0.8,0.75);
    glVertex2d(-0.85,0.75);

    //A
    glColor3f(1.0,1.0,1.0);
    glVertex2d(-0.85,0.45);
    glVertex2d(-0.8,0.15);
    glVertex2d(-0.85,0.45);
    glVertex2d(-0.9,0.15);
    glVertex2d(-0.875,0.3);
    glVertex2d(-0.825,0.3);

    //M
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-0.875,0);
    glVertex2d(-0.9,-0.3);
    glVertex2d(-0.825,0);
    glVertex2d(-0.8,-0.3);
    glVertex2d(-0.875,0);
    glVertex2d(-0.85,-0.2);
    glVertex2d(-0.825,0);
    glVertex2d(-0.85,-0.2);

    //E
    glColor3f(1.0,1.0,1.0);
    glVertex2d(-0.8,-0.45);
    glVertex2d(-0.9,-0.45);
    glVertex2d(-0.9,-0.45);
    glVertex2d(-0.9,-0.70);
    glVertex2d(-0.8,-0.70);
    glVertex2d(-0.9,-0.70);
    glVertex2d(-0.9,-0.57);
    glVertex2d(-0.85,-0.57);

    //O
    glVertex2d(0.8,0.6);
    glVertex2d(0.9,0.6);
    glVertex2d(0.9,0.6);
    glVertex2d(0.9,0.3);
    glVertex2d(0.8,0.3);
    glVertex2d(0.9,0.3);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.3);

    //N
    glColor3f(0.0,0.0,0.0);
    glVertex2d(0.8,0);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.9,0);
    glVertex2d(0.9,-0.3);
    glVertex2d(0.8,0);
    glVertex2d(0.9,-0.3);
    glEnd();

//yellow area
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(0.6,1.0);
    glVertex2d(0.7,1.0);
    glVertex2d(0.7,-1.0);
    glVertex2d(0.6,-1.0);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-0.7,1.0);
    glVertex2d(-0.6,1.0);
    glVertex2d(-0.6,-1.0);
    glVertex2d(-0.7,-1.0);
    glEnd();


//Road
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-0.6,1.0);
    glVertex2d(0.6,1.0);
    glVertex2d(0.6,-1.0);
    glVertex2d(-0.6,-1.0);
    glEnd();

//Green area
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-1.0,1.0);
    glVertex2d(1.0,1.0);
    glVertex2d(1.0,-1.0);
    glVertex2d(-1.0,-1.0);
    glEnd();


 glFlush();

 glutSwapBuffers();


      if(move_y <=-1.6){
         move_y= move_y +3;
      }

       move_y -= 0.001;


      if(move_y2 <=-1.6){
         move_y2= move_y2 +3;
      }

       move_y2 -= 0.001;


      if(move_y3 <=-1.6){
       move_y3= move_y3 +3;
      }

       move_y3 -= 0.001;


      if(move_y4 <=-1.6){
        move_y4= move_y4 +3;
      }

       move_y4 -= 0.001;


     if(move_y5 <=-1.6){
       move_y5= move_y5 +3;
     }

       move_y5 -= 0.0016;


     if(move_y6 <=-1.6){
       move_y6= move_y6 +3;
     }

       move_y6 -= 0.0016;


     if(move_y7 <=-1.6){
      move_y7= move_y7 +3;
     }

      move_y7 -= 0.0016;


     if(move_y8 <=-1.6){
      move_y8= move_y8 +3;
     }

      move_y8 -= 0.0016;


     if(move_y9 <=-1.6){
      move_y9= move_y9 +3;
     }

      move_y9 -= 0.0016;


     if(move_y10 <=-1.6){
       move_y10= move_y10 +3;
     }

       move_y10 -= 0.0016;


     if(move_y11 <=-1.6){
       move_y11= move_y11 +3;
     }

       move_y11 -= 0.0016;


  glutPostRedisplay();

}


void specialKeys( int key, int x, int y ) {

  if (key == GLUT_KEY_UP)
    move_yn += 0.2;

  else if (key == GLUT_KEY_DOWN)
    move_yn -= 0.2;


  if (key == GLUT_KEY_RIGHT){
    move_x += 0.2;
  }
      if(move_x >= 0.55){
         move_x = move_x-0.20;
      }

  else if (key == GLUT_KEY_LEFT)
    move_x -= 0.2;

     if(move_x <= -0.55){
        move_x = move_x+0.20;
     }

glutPostRedisplay();

}


int main(int argc, char* argv[]){

  //  Initialize GLUT and process user parameters
  glutInit(&argc,argv);

  //  Request double buffered true color window with Z-buffer
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
 glutInitWindowSize(1000,800);
  // Create window
  glutCreateWindow("Awesome Cube");

  //  Enable Z-buffer depth test
  glEnable(GL_DEPTH_TEST);

  // Callback functions
  glutDisplayFunc(display);
  glutSpecialFunc(specialKeys);

  //  Pass control to GLUT for events
  glutMainLoop();

  //  Return to OS
  return 0;

}






