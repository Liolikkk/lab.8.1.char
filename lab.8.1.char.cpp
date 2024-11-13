#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int FindThirdDot(char* str, int i, int dotCount) {
    if (str[i] == '\0') return -1; // Якщо дійшли до кінця рядка
    if (str[i] == '.') {
        dotCount++;
        if (dotCount == 3) return i; // Повертаємо індекс третьої крапки
    }
    return FindThirdDot(str, i + 1, dotCount); // Рекурсивно переходимо до наступного символу
}

char* ReplaceEveryFourth(char* dest, const char* str, int i) {
    if (str[i] == '\0') { // Якщо кінець рядка
        dest[i] = '\0';
        return dest;
    }
    dest[i] = ((i + 1) % 4 == 0) ? '.' : str[i]; // Замінюємо кожен четвертий символ на '.'
    return ReplaceEveryFourth(dest, str, i + 1); // Рекурсивно обробляємо наступний символ
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100); // Вводимо рядок

    // Знаходження індексу третьої крапки
    int thirdDotIndex = FindThirdDot(str, 0, 0);
    if (thirdDotIndex != -1) {
        cout << "Index of the third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "There are less than three dots in the string." << endl;
    }

    // Заміна кожного четвертого символу на крапку
    char dest[101];
    ReplaceEveryFourth(dest, str, 0);
    cout << "Modified string: " << dest << endl;

    return 0;
}

