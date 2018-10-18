// Pract2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//#include "prac1.h"
#include <iostream>
#include <gl\freeglut.h>
#include <cmath>

GLuint tringulo1;
static const float PI = 3.14;
static const GLuint indices[8] = {
		0,1,2,
		3,4,5,
		0,1
};

void init()
{
	tringulo1 = glGenLists(1);

	glNewList(tringulo1, GL_COMPILE);
	glBegin(GL_POLYGON);
	/* OLD: 
	for (auto i = 0; i < 5; i++)
	{
		glVertex3f(0.8 * cos(i * 2 * 3.14 / 5), 0.8 * sin(i * 2 * 3.14 / 5), 0);
	}

	*/
	float radius = 0.8;
	for (auto i = 0; i < 6; i++)
	{
		if(i == 2 || i == 3 || i == 5){

			radius = 0.5;
		}
		else {
			radius = 0.8;
		}
		glVertex3f(radius * cos(i * 2 * 3.14 / 3), radius * sin(i * 2 * 3.14 / 3), 0);

	}

	glVertex3f(0.3 * cos(2 * 2 * 3.14 / 3), 0.3 * sin(2 * 2 * 3.14 / 3), 0);
	glVertex3f(0.3 * cos(3 * 2 * 3.14 / 3), 0.3 * sin(3 * 2 * 3.14 / 3), 0);

	glVertex3f(0.5 * cos(4 * 2 * 3.14 / 3), 0.5 * sin(4 * 2 * 3.14 / 3), 0);
	glVertex3f(0.5 * cos(5 * 2 * 3.14 / 3), 0.5 * sin(5 * 2 * 3.14 / 3), 0);
	for (auto i = 4; i < 6; i++)
	{
		glVertex3f(0.5 * cos(i * 2 * 3.14 / 3), 0.5 * sin(i * 2 * 3.14 / 3), 0);
	}

	glEnd();
	glEndList();
}

void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.7, 0.9, 1);

	glPolygonMode(GL_FRONT, GL_LINE);
	glLineWidth(1.0);
	glColor3f(1.0, 0.0, 0.0);
	glCallList(tringulo1);

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

	glutCreateWindow("Practica 2: Geometria");
	std::cout << "Inicializando ..." << std::endl;

	init();

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
}



