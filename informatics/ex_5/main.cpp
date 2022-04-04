#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    //Электроника
    int answ, correct_answ = 0, assessment;
    //ANSWER ONE
    printf("Закон Джоуля – Ленца\n \n");
    printf("1) работа производимая источникам, равна произведению ЭДС источника на заряд, переносимый в цепи. \n2) определяет зависимость между ЭДС источника питания, с внутренним сопротивлением.\n3) пропорционален сопротивлению проводника в контуре алгебраической суммы.\n4) количество теплоты, выделяющейся в проводнике при прохождении по нему электрического тока, равно произведению квадрата силы тока на сопротивление проводника и время прохождения тока через проводник.\n");
    cin >> answ;
    if (answ == 4){
        correct_answ++;
    }
    
    
    //ANSWER TWO
    printf("\e[1;1H\e[2J");
    printf("Физическая величина, характеризующую быстроту совершения работы.\n \n");
    printf("1) работа\n2) напряжения\n3) мощность\n4) сопротивления\n");
    cin >> answ;
    if (answ == 3){
        correct_answ++;
    }
    
    
    //ANSWER THREE
    printf("\e[1;1H\e[2J");
    printf("Устройство, состоящее из катушки и железного сердечника внутри ее:\n \n");
    printf("1) электромагнит\n2) батарея\n3) аккумулятор\n4) реостат\n");
    cin >> answ;
    if (answ == 1){
        correct_answ++;
    }
    
    
    //ANSWER FOUR
    printf("\e[1;1H\e[2J");
    printf("ЭДС источника выражается формулой:\n \n");
    printf("1) I= Q/t\n2) E= Au/q\n3) W=q*E*d\n4) U=A/q\n");
    cin >> answ;
    if (answ == 2){
        correct_answ++;
    }
    
    
    //ANSWER FIVE
    printf("\e[1;1H\e[2J");
    printf("Часть цепи между двумя точками называется:\n \n");
    printf("1) контур\n2) участок цепи\n3) ветвь\n4) электрическая цепь\n5) узел\n");
    cin >> answ;
    if (answ == 2){
        correct_answ++;
    }
    
    
    //ANSWER SIX
    printf("\e[1;1H\e[2J");
    printf("Величина индуцированной ЭДС зависит от:\n \n");
    printf("1) силы тока\n2) напряжения\n3) скорости вращения витка в магнитном поле\n4) длины проводника и силы магнитного поля\n");
    cin >> answ;
    if (answ == 4){
        correct_answ++;
    }
    
    
    if (correct_answ == 6){
        assessment = 5;
    } else if (correct_answ >= 4){
        assessment = 4;
    } else if (correct_answ >= 2){
        assessment = 3;
    } else {
        assessment = 2;
    }
    //4 3 1 2 2 4
    
    printf("Количество правильных ответов %d. Ваша оценка: %d\n",correct_answ, assessment);
    return 0;
}
