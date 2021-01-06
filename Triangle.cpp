#include "GL/freeglut.h"
#include "GL/gl.h"
#include <iostream>
#include <math.h>
#define PI 3.14159265

float x;
void drawTriangle()
{
    glClearColor(0.4, 0.4, 0.4, 0.4);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

        glBegin(GL_TRIANGLES);
                glVertex3f(-0.7,x, 0);
                glVertex3f(x, 0.7, 0);
                glVertex3f(0, -1, 0);
        glEnd();

    glFlush();
    
}

void display()
{
    std::cout << "Displaying Frame\n";
    glClear(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);
    drawTriangle();
    x+=0.01f;




    glutSwapBuffers();
}
void update()
{
    x += 0.001f;
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    x = 0.7f;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Creating a triangle");
    glutDisplayFunc(display);
    glutIdleFunc(update);
    glutMainLoop();
    return 0;
}
