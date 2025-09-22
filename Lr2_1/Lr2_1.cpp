#include "Point.h"


int main()
{
    setlocale(0, "ukr");
    
    Point p(1, 1);
	cout << "Початкові координати точки: " << p.toStr() << endl;

	p.opp();
	cout << "Збільшенн координат на 1: " << p.toStr() << endl;

	p.opp2();
	cout << "Зменшенн координат на 1: " << p.toStr() << endl;

	if(p.equal()) {
		cout << "Координати рівні" << endl;
	} else {
		cout << "Координати не рівні" << endl;
	}
	Point d = p.addSc(2);
	cout << "Додавання скаляра 2 до координат: " << d.toStr() << endl;
	return 0;
}

