// Rotating a point //
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
void drawPolygon();
void myInit();

int main(int argc, char **argv)
{
    glutInit(&argc, argv);                       // initialize the toolkit
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
    glutInitWindowSize(600, 400);                // set window size
    glutInitWindowPosition(100, 150);            // set window position
    glutCreateWindow("Rotating a Polygon");      // open the screen window
    glutDisplayFunc(drawPolygon);                // register redraw function
    myInit();                                    // additional initializations are necessary
    glutMainLoop();                              // go into a perpetual loop
    return 0;
}

void myInit()
{
    glClearColor(0.0, 1.0, 0.0, 0.0); // set green background color
    glColor3f(1.0, 0.0, 0.0);         // set the drawing color red
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 600, 0, 400);       // set the coordinate system to match the window size
}

void drawPolygon()
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the screen
    glMatrixMode(GL_MODELVIEW);   // switch to the drawing perspective
    glLoadIdentity();             // reset the drawing perspective
    glTranslatef(150, 150, 0);    // translate the polygon
    glRotatef(45, 0, 0, 1);       // rotate the polygon by 45 degrees anticlockwise
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(50, 0);
    glVertex2f(50, 50);
    glVertex2f(0, 50);
    glEnd();
    glFlush(); // send all output to display
}
