
/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f) ; // Yellow
	glVertex2f(-29.1323223353958,3.0222416799765);
	glVertex2f(-24.1769560243961,2.964592343828);
	glVertex2f(-24.4357376388764,110.649531657288);
	glVertex2f(-29.5860348321655,110.8156702764264);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f) ; // Yellow
	glVertex2f(-64.3318452640977,103.4240477640653);
	glVertex2f(-64.3318452640977,97.7045664248198);
	glVertex2f(-19.5292414400084,97.8634409064656);
	glVertex2f(-19.5292414400084,103.4240477640653);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(247, 243, 6 ) ; // Yellow
	glVertex2f(-57.3413680716866,55.2850798254162);
	glVertex2f(-49.7153929526927,55.7617032703533);
    glVertex2f(-45.9024053931957,81.9759927418949);
    glVertex2f(-57.1824935900409,89.2842188975974);
    glVertex2f(-68.6214562685318,81.9759927418949);
    glVertex2f(-64.6495942273891,55.6028287887076);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f) ; // Yellow
	glVertex2f(-62.4253514843492,88.6487209710146);
	glVertex2f(-51.6218867324412,88.3309720077232);
	glVertex2f(-55.7526232552295,100.4054326127969);
	glVertex2f(-58.2946149615609,100.4054326127969);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f) ; // Yellow
	glVertex2f(-33.3499140241195,2.8339727834934);
	glVertex2f(-33.2857789299369,0.3968392045562);
	glVertex2f(-18.7912476446789,0.3968392045562);
	glVertex2f(-18.9836529272266,2.8981078776759);
	glEnd();

glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(1200, 1000);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	gluOrtho2D(-350,350,-250,250); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

