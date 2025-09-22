#include "Point.h"


int main()
{
    setlocale(0, "ukr");
    int n;
    cout << "Введiть кiлькiсть точок: ";
    cin >> n;

    Point* points = new Point[n];

    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "Введiть координати точки " << i + 1 << " (x y): ";
        cin >> x >> y;
        points[i] = Point(x, y);
    }

    cout << "Введенi точки:\n";
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
    }

    delete[] points;
    return 0;
}

