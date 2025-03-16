#include <iostream>

// Заготовка
int main()
{
    std::cout << "Введите количество элементов (n): ";
    int n = 0;
    std::cin >> n;

    // Пока только проверим, что мы считали n
    std::cout << "Вы ввели n = " << n << std::endl;

    return 0;
}