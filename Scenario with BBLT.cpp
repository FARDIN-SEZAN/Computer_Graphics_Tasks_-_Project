

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

//tree
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

	//bench
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

	//lampost
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

	//whole building
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








