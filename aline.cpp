#include <GL/glut.h>


void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);


glLineWidth(2.5);
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_LINES);
glVertex3f(0.0, 0.0, 0.0);
glVertex3f(15, 0, 0);
glEnd();

  glFlush();  // Render now
}
 

 int main(int argc, char** argv) {
   glutInit(&argc, argv);          // Initialize GLUT
   glutCreateWindow("drawing a line");  // Create window with the given title
   glutInitWindowSize(320, 320);   // Set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   initGL();                       // Our own OpenGL initialization
   glutMainLoop();                 // Enter the event-processing loop
   return 0;
}