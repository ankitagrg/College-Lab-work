//  Drawing a point//
#include <GL\glut.h> // GLUT, include glu.h and gl.h
void drawPoint();
void myInit();

int main(int argc, char **argv)
{
    glutInit(&argc, argv);                       // initialize the toolkit
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
    glutInitWindowSize(600, 400);                // set window size
    glutInitWindowPosition(100, 150);            // set window position
    glutCreateWindow("Drawing a Point");         // open the screen window
    glutDisplayFunc(drawPoint);                  // register redraw function
    myInit();                                    // additional initializations are necessary
    glutMainLoop();                              // go into a perpetual loop
    return 0;
}

void myInit()
{
    glClearColor(0.0, 1.0, 0.0, 0.0); // set green background color
    glColor3f(1.0, 0.0, 0.0);         // set the drawing color red
    glPointSize(10.0);                // adot is 10x10 pixels
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 320, 0, 240);
}

void drawPoint()
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the screen
    glBegin(GL_POINTS);
    glVertex2f(250, 200);
    glEnd();
    glFlush(); // send all output to display
}
