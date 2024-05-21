//#include <iostream>
//#include <cstdlib>
//
//int main() 
//{
//    setlocale(LC_ALL, "ru");
//    const int size = 10;
//    int arr[size];
//
//    // ���������� ������� ���������� �������
//    for (int i = 0; i < size; i++) 
//    {
//        arr[i] = rand() % 100; // ��������� ����� �� 0 �� 99
//    }
//
//    // ����� ������� �� �����
//    std::cout << "������: ";
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    // ���������� ������������ � ������������� ��������
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
//    // ����� ������������ � ������������� ��������
//    std::cout << "����������� �������: " << min << std::endl;
//    std::cout << "������������ �������: " << max << std::endl;
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
//    // ������ ������������ �� ���� ������� ������� � ��������� ��������� �����
//    int size;
//    std::cout << "������� ������ �������: ";
//    std::cin >> size;
//
//    int minRange, maxRange;
//    std::cout << "������� ����������� � ������������ �������� ��������� ��������� �����: ";
//    std::cin >> minRange >> maxRange;
//
//    int threshold;
//    std::cout << "������� ��������� ��������: ";
//    std::cin >> threshold;
//
//    // ������� � ��������� ������ ���������� �������
//    std::vector<int> arr(size);
//    srand(time(0));
//    for (int i = 0; i < size; i++) 
//    {
//        arr[i] = rand() % (maxRange - minRange + 1) + minRange;
//    }
//
//    // ������� ����� ���������, �������� ������� ������ ����������
//    int sum = 0;
//    for (int i = 0; i < size; i++) 
//    {
//        if (arr[i] < threshold) 
//        {
//            sum += arr[i];
//        }
//    }
//
//    // ������� ���������
//    std::cout << "������: ";
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//    std::cout << "����� ���������, �������� ������� ������ " << threshold << ": " << sum << std::endl;
//
//    return 0;
//}


#include <iostream>

int main() 
{
    setlocale(LC_ALL, "ru");
    int profit[12];
    int start, end;

    std::cout << "������� ������� �� ������ ����� ����: ";
    for (int i = 0; i < 12; i++)
    {
        std::cin >> profit[i];
    }

    std::cout << "������� �������� (������ � ����� ������): ";
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

    std::cout << "����� � ������������ �������� � ���������: " << maxMonth << std::endl;
    std::cout << "����� � ����������� �������� � ���������: " << minMonth << std::endl;

    return 0;
}