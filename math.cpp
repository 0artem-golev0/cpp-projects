#include <iostream>
using namespace std;
int main() {
    int attempts = 0;
    while (attempts < 5 ) {
        cout << "Введите КМ/Ч: ";
        float km_ch;
        cin >> km_ch;
        if(km_ch >=1) {
        float km_min = km_ch/60.0f;
        float m_min = km_ch*16.67f;
        float m_s = km_ch*3.6f;
        cout << "КМ/МИН = " << km_min << "\nМ/МИН = " << m_min << "\nМ/С = " << m_s << endl;
        }
        else {
            cout << "КМ/Ч меньше 1! Ошибка!";
        }
        attempts++;
        cout << "Осталось " << 5 - attempts << " попыток" << endl;
    }
    cout << "Попытки закончились!" << endl;
}