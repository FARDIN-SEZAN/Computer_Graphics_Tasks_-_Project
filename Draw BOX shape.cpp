
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f ); // black
	glVertex2f(-7.2198413778511,3.8856689898004);    // A
	glVertex2f(-7.2697816223785,0.989134807214);    // B

	glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f ); // black
	glVertex2f(-7.2697816223785,0.989134807214);    // B
	glVertex2f(-2.5088116441044,0.989134807214);    //C
	glEnd();

	glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f ); // black
	glVertex2f(-2.5088116441044,0.989134807214);    // C
	glVertex2f(-2.5254583922802,3.9023157379761);  //D
	glEnd();

	 glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f ); // black
	glVertex2f(-2.5254583922802,3.9023157379761);   // D
	glVertex2f(-7.2198413778511,3.8856689898004);  //A
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	gluOrtho2D(-15,15,15,-15);
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
