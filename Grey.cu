#include "GL/freeglut.h"
#include "GL/gl.h"
#include <iostream>

void display()
{

}
void update()
{

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