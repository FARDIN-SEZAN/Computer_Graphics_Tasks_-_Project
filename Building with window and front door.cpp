
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
	glColor3ub(216, 241, 37 ) ; // Yellow
	glVertex2f(75.3196465381935,20.9002687219509);
	glVertex2f(130.2195211187635,20.9002687219509);
	glVertex2f(129.3617105784421,172.7327343588395);
	glVertex2f(75.3196465381935,173.1616396290002);
	glEnd();
//right side buiduing
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f) ; // Yellow
	glVertex2f(130.2195211187635,20.9002687219509);
	glVertex2f(170.5366165138696,21.7580792622723);
	glVertex2f(169.6788059735482,164.1546289556254);
	glVertex2f(130.6484263889242,163.7257236854647);
	glEnd();
//left side building
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f) ; // Yellow
	glVertex2f(75.3196465381935,20.9002687219509);
	glVertex2f(34.144740602766,21.7580792622723);
	glVertex2f(34.144740602766,162.0101026048219);
	glVertex2f(75.7485518083542,163.7257236854647);
	glEnd();
//window
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6 ) ; // Yellow
	glVertex2f(94.1914784252645,136.7046916653405);
	glVertex2f(111.3476892316926,137.1335969355012);
	glVertex2f(111.3476892316926,150.429660310483);
	glVertex2f(93.7625731551038,150.8585655806437);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6 ) ; // Yellow
	glVertex2f(92.9047626147823,108.8258491048948);
	glVertex2f(111.7765945018533,109.2547543750556);
	glVertex2f(111.7765945018533,122.5508177500373);
	glVertex2f(93.333667884943,123.4086282903587);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6 ) ; // Yellow
	glVertex2f(93.7625731551038,80.9470065444492);
	glVertex2f(111.3476892316926,80.5181012742885);
	glVertex2f(111.3476892316926,93.8141646492703);
	glVertex2f(94.1914784252645,95.1008804597524);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6 ) ; // Yellow
	glVertex2f(93.7625731551038,52.2103534436821);
	glVertex2f(111.7765945018533,52.2103534436821);
	glVertex2f(111.3476892316926,65.0775115485032);
	glVertex2f(93.333667884943,65.5064168186639);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(101, 106, 193  ) ; // Yellow
	glVertex2f(94.1914784252645,19.1846476413081);
	glVertex2f(110.0609734212105,18.7557423711474);
	glVertex2f(110.0609734212105,39.7721006090218);
	glVertex2f(93.7625731551038,40.6299111493432);
	glEnd();
//left side buiding windwos
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6   ) ; // Yellow
	glVertex2f(49.1564250583906,134.1312600443763);
	glVertex2f(63.3102989736938,134.560165314537);
	glVertex2f(62.0235831632117,147.4273234193581);
	glVertex2f(48.2986145180692,146.9984181491974);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6 ) ; // Yellow
	glVertex2f(47.8697092479085,86.0938697863776);
	glVertex2f(63.3102989736938,86.0938697863776);
	glVertex2f(64.1681095140152,98.9610278911987);
	glVertex2f(47.4408039777478,98.9610278911987);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6  ) ; // Yellow
	glVertex2f(47.8697092479085,38.9142900687004);
	glVertex2f(63.3102989736938,39.3431953388611);
	glVertex2f(62.4524884333724,50.9236376332);
	glVertex2f(48.2986145180692,51.3525429033607);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6  ) ; // Yellow
	glVertex2f(142.2288686832632,134.560165314537);
	glVertex2f(156.3827425985664,133.7023547742156);
	glVertex2f(155.9538373284057,146.9984181491974);
	glVertex2f(141.7999634131025,146.9984181491974);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6  ) ; // Yellow
	glVertex2f(140.9421528727811,86.5227750565383);
	glVertex2f(155.9538373284057,85.6649645162169);
	glVertex2f(155.9538373284057,99.8188384315201);
	glVertex2f(140,100);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(247, 163, 6  ) ; // Yellow
	glVertex2f(141.7999634131025,37.1986689880576);
	glVertex2f(156.8116478687271,37.1986689880576);
	glVertex2f(155.9538373284057,50.4947323630393);
	glVertex2f(140.9421528727811,51.3525429033607);
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

