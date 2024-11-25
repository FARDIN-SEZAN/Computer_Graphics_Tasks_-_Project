
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


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(82, 243, 7); // Yellow
	glVertex2f(-149.6579033723641,64.2963580744487);
	glVertex2f(-171.388711823112,46.4770951448353);
	glVertex2f(-127.7097868371087,46.4770951448353);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(93, 210, 38); // Yellow
	glVertex2f(-149.8305961977039,51.6246188741029);
	glVertex2f(-176.7574643294044,33.4267904114701);
	glVertex2f(-122.0160291166067,33.2788405865706);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(165, 236, 132); // Yellow
	glVertex2f(-150,40);
	glVertex2f(-182.823407150282,22.330553544011);
	glVertex2f(-116.5418855953269,22.4785033689105);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(102, 51, 0) ; // Yellow
	glVertex2f(-155.1567898940842,24.8457005673018);
	glVertex2f(-155.1567898940842,6.0560728050711);
	glVertex2f(-143.6167035519269,6.0560728050711);
	glVertex2f(-144.0605530266252,24.6977507424023);
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


