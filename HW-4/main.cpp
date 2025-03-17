#include <iostream>
#include <cmath> // для std::llabs

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

    // Вычисляем b3..bn, если n > 2
    for (int i = 3; i <= n; i++)
    {
        // b_n = |b_{n-2}| - 6 * b_{n-1}
        long long next = std::llabs(b1) - 6LL * b2;

        // Выводим очередной элемент
        std::cout << next << " ";

        // Сдвигаем: теперь b1 = b2, b2 = next
        b1 = b2;
        b2 = next;
    }

    std::cout << std::endl;
    return 0;
}