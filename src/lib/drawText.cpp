#include <GL/glut.h>

void draw_text(char *text, float x, float y, void *font)
{
	int textLen;
	textLen = strlen(text);
	glRasterPos2f(x, y);
	for (int i = 0; i < textLen; i++)
		glutBitmapCharacter(font, text[i]);
}