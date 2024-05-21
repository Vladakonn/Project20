//#include <iostream>
//#include <cstdlib>
//
//int main() 
//{
//    setlocale(LC_ALL, "ru");
//    const int size = 10;
//    int arr[size];
//
//    // Заполнение массива случайными числами
//    for (int i = 0; i < size; i++) 
//    {
//        arr[i] = rand() % 100; // случайное число от 0 до 99
//    }
//
//    // Вывод массива на экран
//    std::cout << "Массив: ";
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    // Нахождение минимального и максимального элемента
//    int min = arr[0];
//    int max = arr[0];
//    for (int i = 1; i < size; i++) 
//    {
//        if (arr[i] < min) 
//        {
//            min = arr[i];
//        }
//        if (arr[i] > max) 
//        {
//            max = arr[i];
//        }
//    }
//
//    // Вывод минимального и максимального элемента
//    std::cout << "Минимальный элемент: " << min << std::endl;
//    std::cout << "Максимальный элемент: " << max << std::endl;
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    // Запрос пользователю на ввод размера массива и диапазона случайных чисел
//    int size;
//    std::cout << "Введите размер массива: ";
//    std::cin >> size;
//
//    int minRange, maxRange;
//    std::cout << "Введите минимальное и максимальное значение диапазона случайных чисел: ";
//    std::cin >> minRange >> maxRange;
//
//    int threshold;
//    std::cout << "Введите пороговое значение: ";
//    std::cin >> threshold;
//
//    // Создаем и заполняем массив случайными числами
//    std::vector<int> arr(size);
//    srand(time(0));
//    for (int i = 0; i < size; i++) 
//    {
//        arr[i] = rand() % (maxRange - minRange + 1) + minRange;
//    }
//
//    // Находим сумму элементов, значения которых меньше порогового
//    int sum = 0;
//    for (int i = 0; i < size; i++) 
//    {
//        if (arr[i] < threshold) 
//        {
//            sum += arr[i];
//        }
//    }
//
//    // Выводим результат
//    std::cout << "Массив: ";
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//    std::cout << "Сумма элементов, значения которых меньше " << threshold << ": " << sum << std::endl;
//
//    return 0;
//}


#include <iostream>

int main() 
{
    setlocale(LC_ALL, "ru");
    int profit[12];
    int start, end;

    std::cout << "Введите прибыль за каждый месяц года: ";
    for (int i = 0; i < 12; i++)
    {
        std::cin >> profit[i];
    }

    std::cout << "Введите диапазон (начало и конец месяца): ";
    std::cin >> start >> end;

    int maxProfit = profit[start - 1], minProfit = profit[start - 1];
    int maxMonth = start, minMonth = start;

    for (int i = start; i <= end; i++) 
    {
        if (profit[i - 1] > maxProfit) 
        {
            maxProfit = profit[i - 1];
            maxMonth = i;
        }
        if (profit[i - 1] < minProfit) 
        {
            minProfit = profit[i - 1];
            minMonth = i;
        }
    }

    std::cout << "Месяц с максимальной прибылью в диапазоне: " << maxMonth << std::endl;
    std::cout << "Месяц с минимальной прибылью в диапазоне: " << minMonth << std::endl;

    return 0;
}