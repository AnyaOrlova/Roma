#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i;
    float x, y, a;
    cout << "Введите количество параметров:  " << endl;
    cin >> n;
    for (i = 1; i <= n; i++) {
        x = 1.0;
        cout << "Введите значение параметра: " << i << endl;
        cin >> a;
        cout << "Таблица" << i << "\t" << "Параметр " << a << endl;
        while (x <= 15) {
            y = 0.5 * x * pow((1 + a * x), 0.2);
            cout << "x=" << x << "\t\t" << "y=" << y << endl;
            x += 1.0;
        }
    }
    return 0;
}
