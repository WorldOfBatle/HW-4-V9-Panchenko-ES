#include <iostream>

// Заготовка
int main()
{
    std::cout << "Введите количество элементов (n): ";
    int n = 0;
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Некорректное значение n!\n";
        return 0; // завершаем программу
    }

    long long b1 = -10; // b_1
    long long b2 = 2;   // b_2

    // Если n >= 1, выводим b1
    if (n >= 1)
    {
        std::cout << b1 << " ";
    }

    // Если n >= 2, выводим b2
    if (n >= 2)
    {
        std::cout << b2 << " ";
    }

    return 0;
}