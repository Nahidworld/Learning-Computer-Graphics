#include<windows.h>
#include<GL/glut.h>

void display(){
    glClearColor(1.0f, 1.0f, 1.0f,1.0f); //Set Background Color
    glClear(GL_COLOR_BUFFER_BIT); //clear the color buffer
    glPointSize(9.0);

    ///Drawing X and Y axis
    glBegin(GL_LINES);
    glColor3f(1.0f,0.0f, 0.0f);
    ///X-Axis
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f,0.0f);
    ///Y-Axis
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();


    ///Drawing Rectangle:
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.8f,0.5f);
    glVertex2f(0.8f,-0.8f);
    glVertex2f(-0.8f,-0.8f);
    glVertex2f(-0.8f,0.5f);
    glEnd();

    ///Drawing Star:
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.15f, -0.2f);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.0f, 0.3f);

    glEnd();

    glFlush();
}


int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowSize(1024,768);
    glutInitWindowPosition(80,50);
    glutCreateWindow("Lab 3 Flag");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
