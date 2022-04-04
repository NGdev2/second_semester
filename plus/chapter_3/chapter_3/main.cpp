// task 3.17
#include <iostream>

using namespace std;

int main() {
    int count, i, negative_numb = 0, sum = 0, division_condition = 0;
    cout << "Введите количество чисел" << endl;
    cin >> count;
    for (i = 0; i < count; i++) {
        int a;
        cin >> a;
        if (a < 0) {
            negative_numb++;
        } else if (a > 0) {
            sum+=a;
        }
        if (a%5==4){
            division_condition++;
        }
    }
    cout << "Количество отрицательных чисел = " << negative_numb << " Сумма положительных чисел: " << sum << " Количество чисел, которые делятся на 5 с остатком 4: " << division_condition << endl;
}
