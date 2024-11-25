

#include <windows.h>
#include <GL/glut.h>

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-8,8,-8,8,-8,8);

glBegin(GL_QUADS);
glColor3f(0.52f, 0.25f, 0.923f);
glVertex2f(-6.1754540991259,3.1348306142652);
glVertex2f(-6.1576823894037,3.6146667767667);
glVertex2f(-0.3818767296641,3.6146667767667);
glVertex2f(-0.3818767296641,3.1437164691264);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.039f, 0.073f, 0.741f);
glVertex2f(-6.1754540991259,2.6283368871804);
glVertex2f(-6.1754540991259,3.1348306142652);
glVertex2f(-0.3818767296641,3.1437164691264);
glVertex2f(-0.3818767296641,2.6461085969027);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.036f, 0.75f, 0.78f);
glVertex2f(-6.1754540991259,2.1218431600955);
glVertex2f(-6.1754540991259,2.6283368871804);
glVertex2f(-0.3818767296641,2.6461085969027);
glVertex2f(-0.3818767296641,2.1218431600955);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.01f, 0.332f, 0.1f);
glVertex2f(-6.1576823894037,1.6242352878718);
glVertex2f(-6.1754540991259,2.1218431600955);
glVertex2f(-0.3818767296641,2.1218431600955);
glVertex2f(-0.372990874803,1.5975777232884);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.89f, 0.38f, 0.043f);
glVertex2f(-6.1754540991259,1.1266274156481);
glVertex2f(-6.1576823894037,1.6242352878718);
glVertex2f(-0.372990874803,1.5975777232884);
glVertex2f(-0.3818767296641,1.1088557059258);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.875f, 1.0f, 0.043f);
glVertex2f(-6.1665682442648,0.6201336885633);
glVertex2f(-6.1754540991259,1.1266274156481);
glVertex2f(-0.3818767296641,1.1088557059258);
glVertex2f(-0.3818767296641,0.6112478337021);
glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 0.0f, 0.0);
glVertex2f(-6.1679608630026,0.1598828131288);
glVertex2f(-6.1665682442648,0.6201336885633);
glVertex2f(-0.3818767296641,0.6112478337021);
glVertex2f(-0.3679608630026,0.1598828131288);
glEnd();

glFlush();
}

int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(520, 520);
glutCreateWindow("OpenGL Setup");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}


