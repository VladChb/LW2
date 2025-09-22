#pragma once
using namespace std;
#include <iostream>
#include <string>

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

	Point& opp() {
		x++; y++;
		return *this;
	}
	Point& opp2() {
		x--; y--;
		return *this;
	}

	bool equal() {
		return x == y;
	}
	Point addSc(int scalar) {
		return Point(x + scalar, y + scalar);
	}
	string toStr() {
		return "X: " + to_string(x) + ", Y: " + to_string(y);
	}
};