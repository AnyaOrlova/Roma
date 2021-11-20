#include <iostream>
using namespace std;
int main(){
    float omax = -9999999999.0;
    int i = 0, ko, otr, ex = 0;
    cout<< "Введите количество элементов" << endl;
    cin >> ko;
    for (i; i < ko; i++) {
        cout << "Введите элементы" << endl;
        cin >> otr;
        if (otr > omax) {
            if (otr < 0) {
                omax = otr;
                ex = i + 1;
            }
        }
    }
    cout << "Максимальный отрицательный элемент равен " << omax << endl;
    cout << "Порядковый номер элемента " << ex << endl;
    return 0;
}
