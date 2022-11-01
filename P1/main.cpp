#include "cstdlib"
#include "GL/freeglut.h"
float red = 0.1;
void myDisplay()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// OpenGL draw calls
	

	// swap buffers
	glutSwapBuffers();
}

void myKeyboard(unsigned char key, int x, int y)
{
	// handle keyboard
	switch (key)
	{
	case 'a':
		// do something
		break;
	}
	glutPostRedisplay();
}
void myKeyboard2(int key, int x, int y)
{
	// handle keyboard
}

void myMouse(int button, int state, int x, int y)
{
	// mouse up/down
}

void myMouseMotion(int x, int y)
{
	// mouse move after mouse down
}

void myPassiveMotion(int x, int y)
{
	// mouse move while mouse not down
}

void myReshape(int x, int y)
{
	// tell glut to redraw
	glutPostRedisplay();
}

void myIdle()
{
	// handle animations
	glClearColor(red, 0, 0, 0);
	red+=0.01;

	// tell glut to redraw
	glutPostRedisplay();
}
int main(int argc, char **argv)
{
	// init glut
	glutInit(&argc, argv);

	// create window
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Window Title");
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	// register callback
	glutDisplayFunc(myDisplay);		// render
	glutKeyboardFunc(myKeyboard);		// ascii key
	glutSpecialFunc(myKeyboard2);		// special key
	glutMouseFunc(myMouse);			// mouse up/down
	glutMotionFunc(myMouseMotion);		// mouse move after mouse down
	glutPassiveMotionFunc(myPassiveMotion); // mouse move ,while mouse not down
	glutReshapeFunc(myReshape);		// window resize
	glutIdleFunc(myIdle);			// idle callback

	// OpenGl init
	glClearColor(0, 0, 0, 0); // set background color

	// create buffers
	// create textures
	// compile shaders

	// Call main loop
	glutMainLoop();
	// Exit when main loop is done
	return 0;
}
