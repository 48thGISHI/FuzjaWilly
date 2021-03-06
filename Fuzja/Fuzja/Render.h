#pragma once
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <atltime.h>
#include <windows.h>
#include <iostream>

#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>

void reshape(int w, int h);
void initGL();
void drawHex(double center[2], double hexSize, double color[3]);
void initMap(int mapSize);
void Sasiedzi();
void makeMap(int layers);
void makeMap_2(int layers);
void display();
void Keys(int key, int x, int y);
void mouse(int button, int state, int x, int y);
void MouseWheel(int wheel, int direction, int x, int y);
//int render(int argc, char* argv[]);