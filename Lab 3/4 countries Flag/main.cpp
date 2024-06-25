#include<windows.h>
#include<GL/glut.h>

void display(){
    glClearColor(0.0f, 1.0f, 1.0f,0.7f); //Set Background Color
    glClear(GL_COLOR_BUFFER_BIT); //clear the color buffer
    glPointSize(9.0);
    glLineWidth(7);
    ///Drawing X and Y axis
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f, 1.0f);
    //X-Axis
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f,0.0f);
    //Y-Axis
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();
    //-------------------------------

    //-------------------------------
    ///1. Iceland Flag:
    //rectangle
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f, 1.0f);
    glVertex2f(.1f,.1f);
    glVertex2f(.1f,.7f);
    glVertex2f(.9f,.7f);
    glVertex2f(.9f,.1f);
    glEnd();

    //inner white rectangle horizontal
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 1.0f);
    glVertex2f(.1f,.5f);
    glVertex2f(.1f,.3f);
    glVertex2f(.9f,.3f);
    glVertex2f(.9f,.5f);
    glEnd();
    //inner white rectangle vertical
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.3f,.7f);
    glVertex2f(.3f,.1f);
    glVertex2f(.5f,.1f);
    glVertex2f(.5f,.7f);
    glEnd();

    //inner red rectangle horizontal
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.2f, 0.3f);
    glVertex2f(.1f,.35f);
    glVertex2f(.1f,.45f);
    glVertex2f(.9f,.45f);
    glVertex2f(.9f,.35f);
    glEnd();

    //inner red rectangle vertical
    glBegin(GL_POLYGON);
    glColor3f(1.0f,.2f,.3f);
    glVertex2f(.35f,.7f);
    glVertex2f(.45f,.7f);
    glVertex2f(.45f,.1f);
    glVertex2f(.35f,.1f);
    glEnd();
    //-------------------------------

    //-------------------------------
    ///2. South Africa Flag:
    //red rectangle
    glBegin(GL_QUADS);
    glColor3f(.0f,1.0f,.0f);
    glVertex2f(-.9f,.6f);
    glVertex2f(-.1f,.6f);
    glVertex2f(-.1f,.1f);
    glVertex2f(-.9f,.1f);
    glEnd();

    //left side big triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,1.0f, 0.0f);
    glVertex2f(-.9f,.52f);
    glVertex2f(-.7f,.35f);
    glVertex2f(-.9f,.18f);
    glEnd();

    //left side small triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f, 0.0f);
    glVertex2f(-.9f,.48f);
    glVertex2f(-.75f,.35f);
    glVertex2f(-.9f,.22f);
    glEnd();


    //upper big trapezium:
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-.1f,.6f);
    glVertex2f(-.1f,.4f);
    glVertex2f(-.6f,.4f);
    glVertex2f(-.8f,.6f);
    glEnd();

    //upper trapezium:
    glBegin(GL_QUADS);
    glColor3f(1.0f,.0f,.0f);
    glVertex2f(-.1f,.6f);
    glVertex2f(-.1f,.45f);
    glVertex2f(-.6f,.45f);
    glVertex2f(-.75f,.6f);
    glEnd();

    //lower big trapezium:
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-.1f,.3f);
    glVertex2f(-.1f,.1f);
    glVertex2f(-.8f,.1f);
    glVertex2f(-.6f,.3f);
    glEnd();

    //lower small trapezium:
    glBegin(GL_QUADS);
    glColor3f(.0f,.0f,1.0f);
    glVertex2f(-.1f,.25f);
    glVertex2f(-.1f,.1f);
    glVertex2f(-.75f,.1f);
    glVertex2f(-.6f,.25f);
    glEnd();
    //-------------------------------

    //-------------------------------
    ///3. Senegal Flag:
    //red rectangle
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.1f, 0.0f);
    glVertex2f(-.1f,-.1f);
    glVertex2f(-.35f,-.1f);
    glVertex2f(-.35f,-.8f);
    glVertex2f(-.1f,-.8f);
    glEnd();

    //yellow rectangle
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 0.2f);
    glVertex2f(-.35f,-.1f);
    glVertex2f(-.35f,-.8f);
    glVertex2f(-.6f,-.8f);
    glVertex2f(-.6f,-.1f);
    glEnd();

    //green rectangle
    glBegin(GL_QUADS);
    glColor3f(0.1f,1.0f, 0.1f);
    glVertex2f(-.6f,-.8f);
    glVertex2f(-.6f,-.1f);
    glVertex2f(-.85f,-.1f);
    glVertex2f(-.85f,-.8f);
    glEnd();

    //Star in the middle:
    glBegin(GL_POLYGON);
    glColor3f(0.1f,1.0f, 0.1f);
    glVertex2f(-.44f,-.5f);
    glVertex2f(-.37f,-.5f);
    glVertex2f(-.43f,-.54f);
    glVertex2f(-.4f,-.64f);
    glVertex2f(-.48f,-.58f);
    glVertex2f(-.55f,-.64f);
    glVertex2f(-.52f,-.55f);
    glVertex2f(-.58f,-.5f);
    glVertex2f(-.5f,-.5f);
    glVertex2f(-.47f,-.42f);
    glEnd();
    //-------------------------------

    //-------------------------------
    ///4. Israel Flag:
    //rectangle
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f, 1.0f);
    glVertex2f(.1f,-.1f);
    glVertex2f(.1f,-.8f);
    glVertex2f(.9f,-.8f);
    glVertex2f(.9f,-.1f);
    glEnd();

    //inner blue rectangle
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(.1f,-.2f);
    glVertex2f(.9f,-.2f);
    glVertex2f(.9f,-.7f);
    glVertex2f(.1f,-.7f);
    glEnd();

    //inner white rectangle
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.1f,-.3f);
    glVertex2f(.9f,-.3f);
    glVertex2f(.9f,-.6f);
    glVertex2f(.1f,-.6f);
    glEnd();

    //Blue Star lower part
    glBegin(GL_LINES);
    glLineWidth(2);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(.4f,-.4f);
    glVertex2f(.6f,-.4f);

    glVertex2f(.6f,-.4f);
    glVertex2f(.5f,-.55f);

    glVertex2f(.5f,-.55f);
    glVertex2f(.4f,-.4f);
    glEnd();

    //Blue Star upper part
    /*glBegin(GL_LINES);
    glLineWidth(2);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(.5f,-.35f);
    glVertex2f(.6f,-.5f);

    glVertex2f(.6f,-.5f);
    glVertex2f(.4f,-.5f);

    glVertex2f(.4f,-.5f);
    glVertex2f(.5f,-.35f);
    glEnd();*/

    //Blue Star upper part
    glBegin(GL_LINE_STRIP);
    glLineWidth(2.0);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(.5f,-.35f);
    glVertex2f(.6f,-.5f);
    glVertex2f(.4f,-.5f);
    glVertex2f(.5f,-.35f);
    glEnd();

    //-------------------------------


    glFlush();
}


int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowSize(1024,768);
    glutInitWindowPosition(80,50);
    glutCreateWindow("4 countries Flag");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
