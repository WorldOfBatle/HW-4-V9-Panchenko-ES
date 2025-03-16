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

    return 0;
}