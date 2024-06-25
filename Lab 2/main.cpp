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

    ///Drawing Polygon:
    glBegin(GL_POLYGON);

    glColor3f(0.5f,0.5f, 0.0f);

    glVertex2f(.4f,0.3f);
    glVertex2f(0.7f,0.3f);
    glVertex2f(0.8f,0.5f);
    glVertex2f(0.7f,0.7f);
    glVertex2f(0.4f,0.7f);
    glVertex2f(0.3f,0.5f);

    glEnd();

    ///Drawing Triangles:
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,0.0f, 0.0f);
    glVertex2f(-0.9f,0.5f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();


    ///Drawing Triangles:
    glBegin(GL_TRIANGLES);
    glColor3f(0.1f,0.8f, 0.3f);
    glVertex2f(0.5f,-0.5f);
    glVertex2f(0.3f,-0.9f);
    glVertex2f(0.7f,-0.9f);
    glEnd();

    ///Drawing Rextanges:
    glBegin(GL_QUADS);
    glColor3f(0.2f,0.2f, 0.8f);
    glVertex2f(-0.9f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-0.9f);
    glVertex2f(-0.9f,-0.9f);
    glEnd();


    glFlush();
}


int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("Lab 2 Drawing");
    glutInitWindowSize(1024,768);
    glutInitWindowPosition(80,50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

