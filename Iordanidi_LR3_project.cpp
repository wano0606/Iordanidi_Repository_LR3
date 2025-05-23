#include <iostream>
#include <locale>

using namespace std;

void input(int &A, int &B, int &C) {
    //Разрабатывается Ивановым И. - ветка branch_fun_1
    cout << "Введите целое число A: ";
    cin >> A;
    cout << "Введите целое число B: ";
    cin >> B;
    cout << "Введите целое число C: ";
    cin >> C;
}

void calculateRemainder(int A, int B, int C) {
    //Разрабатывается Петровым П. - ветка branch_fun_2
    if (C == 0) {
        cout << "Ошибка: Деление на ноль!" << endl;
        return; // Завершение функции при ошибке
    }

    int sum = A + B;
    int remainder = sum % C;
    cout << "1. Остаток от деления суммы A и B на C: " << remainder << endl;
}

void calculateQuotient(int A, int B, int C) {
    //Разрабатывается Андреевым А. - ветка branch_fun_3
    if (C == 0) {
        cout << "Ошибка: Деление на ноль!" << endl;
        return; // Завершение функции при ошибке
    }

    int sum = A + B;
    int quotient = sum / C;
    cout << "2. Целая часть от деления суммы A и B на C: " << quotient << endl;
}

int main() {
    setlocale(LC_ALL, ""); // Установка локали для корректного отображения символов
    int A, B, C;
    int choice;

    input(A, B, C);

    cout << "Выберите действие:" << endl;
    cout << "1. Найти остаток от деления суммы A и B на C" << endl;
    cout << "2. Найти целую часть от деления суммы A и B на C" << endl;
    cout << "Введите номер действия (1 или 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            calculateRemainder(A, B, C);
            break;
        case 2:
            calculateQuotient(A, B, C);
            break;
        default:
            cout << "Ошибка: Неверный выбор!" << endl;
            break;
    }

    return 0;
}
