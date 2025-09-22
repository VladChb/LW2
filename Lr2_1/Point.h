#pragma once
using namespace std;
#include <iostream>

class Point
{
	int x;
	int y;

public:
	Point() : x(0), y(0) {};
	Point(int x, int y) : x(x), y(y) {};
	int getX();
	int getY();
	void setX(int val);
	void setY(int val);
	void Print();
	double Calculate();
	void Move(int a, int b);
	void setSk(int k);

};