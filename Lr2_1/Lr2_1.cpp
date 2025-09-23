#include "Point.h"


int main()
{
    setlocale(0, "ukr");  

    int n;
    cout << "\nВведiть кiлькiсть точок: ";
    cin >> n;

    Point* points = new Point[n];

    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "Введiть координати точки " << i + 1 << " (x y): ";
        cin >> x >> y;
        points[i] = Point(x, y);


        Point p(x, y);
        cout << "Початкові координати точки: " << p.toStr() << endl;

        p.inc();
        cout << "Збільшеня координат на 1: " << p.toStr() << endl;

        p.dec();
        cout << "Зменшеня координат на 1: " << p.toStr() << endl;

        if (p.equal()) {
            cout << "Координати рівні" << endl;
        }
        else {
            cout << "Координати не рівні" << endl;
        }

    }

    cout << "\nВведенi точки:\n";
    for (int i = 0; i < n; i++) {
        points[i].Print();
        cout << "\nВiдстань до початку координат: "
            << points[i].Calculate() << endl;
    }

    int a, b;
    cout << "\nВведiть вектор зсуву (a b): ";
    cin >> a >> b;

    cout << "\nТочки пiсля перемiщення:\n";
    for (int i = 0; i < n; i++) {
        points[i].Move(a, b);
        points[i].Print();
        cout << "\n";
    }

    int k;
    cout << "Введіть скаляр: ";
    cin >> k;
    if (n > 0) {
        cout << "\nМножимо останню точку на: " << k << ":\n";
        points[n - 1].setSk(k);
        points[n - 1].Print();
		cout << "\n";
		Point p = points[n - 1];
        Point d = p.addSc(k);
        cout << "Додавання скаляра "<< k <<" до координат: " << d.toStr() << endl;
    }

    delete[] points;
    return 0;

}

