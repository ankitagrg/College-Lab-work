//  Drawing a line with OpenGL API. //
#include <GL\glut.h> // GLUT, include glu.h and gl.h
void drawLine();
void myInit();
int main(int argc, char **argv)
{
    glutInit(&argc, argv);                       // initialize the toolkit
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
    glutInitWindowSize(600, 400);                // set window size
    glutInitWindowPosition(100, 150);            // set window position
    glutCreateWindow("Drawing a line");          // open the screen window
    glutDisplayFunc(drawLine);                   // register redraw function
    myInit();                                    // additional initializations are necessary
    glutMainLoop();                              // go into a perpetual loop
    return 0;
}


void myInit()
{
    glClearColor(1.0, 0.0, 0.0, 0.0); // set red background color
    glColor3f(0.0, 1.0, 0.0);         // set the drawing color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 320, 0, 240);
}

void drawLine()
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the screen
    glBegin(GL_LINES);
    glVertex2f(250, 200);
    glVertex2f(150, 150);
    glEnd();
    glFlush(); // send all output to display
}
