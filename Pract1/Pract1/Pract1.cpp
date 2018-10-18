// Pract1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "pch.h"
//#include "prac1.h"
#include <iostream>
#include <gl\freeglut.h>
#include <Utilidades.h>
void display()
{
	
	glClearColor(0.0, 0.7, 0.9, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
		//x-> ^ y (para el fondo) z
		glVertex3f(0.5, 0.0, 0.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.0, 0.5, 0.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.0, 0.0, 0.5);
		glVertex3f(0.0, 0.0, 0.0);
		
	glEnd();


	glutWireTeapot(0.5);
	glFlush();
}
void reshape(GLint w, GLint h)
{

}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);

	glutCreateWindow("Titulo de ventana original");
	std::cout << "Hola Mundo running" << std::endl;
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
}
