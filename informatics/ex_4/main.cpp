#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int row = 5;
    int column = 4;
    int b[row][column];
    
    for (int i = 0; i < row; i++){
        printf ("Введите %i-ую строку матрицы\n",i+1);
        for (int j = 0; j < column; j++){
            cin >> b[i][j];
        }
    }
    
    int num_str = 0;
    int cur_max = b[0][0];
    int glob_max = b[0][0];
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if (cur_max < b[i][j]){
                cur_max = b[i][j];
            }
        }
        if (cur_max > glob_max){
            glob_max = cur_max;
            num_str = i;
        }
    }

    printf ("Максимальное число, равное %d находится на строке %d", glob_max, num_str+1);
    
    return 0;
}
