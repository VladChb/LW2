#include "Point.h"



void Point::Print() {
	cout << "X:" << x << " Y:" << y;
}

double Point::Calculate() {
	return sqrt(x * x + y * y);
}

void Point::Move(int a, int b) {
	x += a;
	y += b;
}

int Point::getX() {
	return x;
}

void Point::setX(int x_) {
	x = x_;
}

int Point::getY() {
	return y;
}

void Point::setY(int y_) {
	y = y_;
}
void Point::setSk(int k) {
	x *= k;
	y *= k;
}
