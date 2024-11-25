

#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h


/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

glLineWidth(7.5);


// DRAWING LINE


glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f); // Red

glVertex2f(-6.9867869033902,2.8202771065502);
glVertex2f(-1.077191300987,2.8202771065502); // x, y
glEnd();


glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f); // Red

glVertex2f(-4.2234267062101,4.8678271321716);
glVertex2f(-4.2400734543859,0.7061400882257); // x, y
glEnd();





// square

glBegin(GL_POLYGON); // Each set of 4 vertices form a quad

glColor3f(1.0f, 0.0f, 0.0f); // Red

glVertex2f(-6.2709767318315,3.3196795518237);//S
glVertex2f(-4.7394758996594,3.3196795518237); // T
glVertex2f(-4.7894161441867,4.5681856650075); // U
glVertex2f(-6.2543299836557,4.6181259095348); //R

glEnd();

// drawing angle triangle


glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad

glColor3ub(208, 4, 249); // Red

glVertex2f(-6.2376832354799,1.8714124605306); //E
glVertex2f(-4.8726498850657,1.0224283035656); // F
glVertex2f(-4.8726498850657,2.6704563729682); // G


glEnd();

glBegin(GL_QUADS); // These vertices form a closed polygon

glColor3f(0.0f, 0.6f, 0.0f); // red

glVertex2f(-3.540910031003,3.6359677671636);//L

glVertex2f(-2.0094091988309,3.6359677671636);//Q

glVertex2f(-2.0094091988309,4.3018376941949);//P

glVertex2f(-3.540910031003,4.2851909460192); //k

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon

glColor3f(0.0f, 0.6f, 0.0f); // red

glVertex2f(-2.0094091988309,4.3018376941949);//p

glVertex2f(-2.0094091988309,4.684712902238);//o

glVertex2f(-1.310245775448,3.9855494788551);//n

glVertex2f(-1.9761157024793,3.3030328036479);//m

glVertex2f(-2.0094091988309,3.6359677671636);//q

glEnd();

glBegin(GL_TRIANGLES);

glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(-2.7252193703896,2.4207551503314);//I

glVertex2f(-3.540910031003,1.3220697707297);//H

glVertex2f(-1.9428222061278,1.3553632670813);//j

glEnd();


glFlush(); // Render now

}


int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT

glutCreateWindow("Square and rectangle"); // Create a window with the given title

glutInitWindowSize(620, 620); // Set the window's initial width & height
glutInitWindowPosition(50,50);
gluOrtho2D(-15,15,-15,15);
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop

return 0;

}


