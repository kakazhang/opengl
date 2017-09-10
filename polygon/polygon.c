#include <GL/glut.h>
#include <stdlib.h>


void draw_point() {
    int i;
    //point color
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(10);

    //draw 8 points
    glBegin(GL_POINTS);
    for (i = 0; i < 8; i++) {
         glVertex2f(-0.9, ((GLfloat)i * 0.1));
    }

    glEnd();
}

void drawLineStrip()
{
      //triangle line color
      glColor3f (0.0, 0.0, 1.0);
      glPointSize(10);
      glBegin(GL_LINE_LOOP);
      //define 3 point of triangle
      glVertex2f(0.0,0.0);
      glVertex2f(-0.3,-0.5);
      glVertex2f(0.3,-0.5);
      glEnd ();
}

void render_scene() {
    //clear screen
    glClear(GL_COLOR_BUFFER_BIT);
    //set color
    glColor3f(0.0,1.0,0.0);

    glRectf(0.25f, 0.75f, 0.75f,0.25f);

    draw_point();
    drawLineStrip();
    glFlush(); 
}

void triangle_display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,0.0);

    glBegin(GL_POLYGON);
    glVertex3f(0.25,0.25,0.0);
    glVertex3f(0.75,0.25,0.0);
    glVertex3f(0.75,0.75,0.0);
    glVertex3f(0.25,0.75,0.0);
    glEnd();

    glFlush();
}

void init(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);

    glutCreateWindow("kaka's first opengl program");
    glutDisplayFunc(render_scene);
}

int main(int argc, char** argv) {
    init(argc, argv);
    //set window background color:white(1.0f, 1.0f, 1.0f)
    glClearColor(1.0f,1.0f,1.0f,1.0f); 
    glutMainLoop();
    return 0;
}

