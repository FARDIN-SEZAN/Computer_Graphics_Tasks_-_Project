
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
	glColor3ub(102, 51, 0) ; // Yellow
	glVertex2f(-108.9614826536417,32.5354992226481);
	glVertex2f(-110,20);
	glVertex2f(-48.7198688062529,19.6521441820184);
	glVertex2f(-49.3163204285043,31.8197572759464);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(241, 83, 14 ) ; // Yellow
	glVertex2f(-110.2736762225947,17.743498990814);
	glVertex2f(-48.3619978329021,17.2663376930129);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(241, 83, 14 ) ; // Yellow
	glVertex2f(-110.2736762225947,17.743498990814);
	glVertex2f(-113.6138053072024,12.7333053639024);
	glVertex2f(-43.5903848548911,13.3297569861538);
	glVertex2f(-48.3619978329021,17.2663376930129);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(89, 77, 91  ) ; // Yellow
	glVertex2f(-105.621353569034,11.0632408215986);
	glVertex2f(-105.5020632445837,3.1900794078804);
    glVertex2f(-48.9584494551535,11.5404021193997);
    glVertex2f(-49.197030104054,2.8322084345296);
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





