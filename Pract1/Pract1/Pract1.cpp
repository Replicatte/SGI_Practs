// Pract1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "pch.h"
#include <iostream>
#include <gl\freeglut.h>
void display()
{
	glClearColor(0.7, 0.8, 0.1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
void reshape(GLint w, GLint h)
{
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Hola Mundo");
	std::cout << "Hola Mundo running" << std::endl;
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
}
