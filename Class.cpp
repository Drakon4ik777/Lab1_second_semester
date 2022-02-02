#include <iostream>
#include <algorithm>
#include <ctime>
#include "Class.h"


void MyArray::fill_array(int n)
{
    delete[]mas;
    mas = new int[20];
    len = std::min(n, 20);
    for (int i = 0; i < len; i++)
    {
        mas[i] = rand() % 100;
        std::cout << mas[i] << ' ';
    }
    std::cout << "\n";
}
bool MyArray::not_empty()
{
    if (len == '\0')
    {
        return true;
    }
    return false;
}
void MyArray::f4()
{
    if (not_empty())
    {
        std::cout << "Array is empty\n";
        return;
    }
    if (len != 1)
    {
        for (int j = 0; j < 2; j++)
        {
            int tmp = mas[0];
            for (int i = 0; i < len - 1; i++)
            {
                mas[i] = mas[i + 1];
            }
            mas[len - 1] = tmp;
        }
    }
    for (int i = 0; i < len; i++)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << '\n';
}
void MyArray::f5()
{
    if (not_empty())
    {
        std::cout << "Array is empty\n";
        return;
    }
    if (len != 1)
    {
        for (int j = 0; j < 2; j++)
        {
            int tmp = mas[len - 1];
            for (int i = len - 1; i > 0; i--)
            {
                mas[i] = mas[i - 1];
            }
            mas[0] = tmp;
        }
    }
    for (int i = 0; i < len; i++)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << '\n';
}
void MyArray::f7()
{
    if (not_empty())
    {
        std::cout << "Array is empty\n";
        return;
    }
    int tmp1;
    if (len % 2 == 0)
    {
        for (int i = 0; i < len / 2; i++)
        {
            tmp1 = mas[i];
            mas[i] = mas[i + (len / 2)];
            mas[i + (len / 2)] = tmp1;
        }
    }
    else
    {
        int tmp;
        for (int i = 0; i < len / 2; i++)
        {
            tmp = mas[i];
            mas[i] = mas[i + len / 2];
            mas[i + len / 2] = tmp;
        }
        tmp = mas[len - 1];
        for (int i = len - 1; i > len / 2 - 1; i--)
        {
            mas[i] = mas[i - 1];
        }
        mas[len / 2] = tmp;
    }
    for (int i = 0; i < len; i++)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << '\n';
}
void MyArray::f11(int add)
{
    if (not_empty())
    {
        std::cout << "Array is empty\n";
        return;
    }
    if (len == 20)
    {
        std::cout << "Array is filled\n";
        return;
    }
    int max = 0;
    for (int i = 1; i < len; i++)
    {
        if (mas[i] > mas[max])
        {
            max = i;
        }
    }
    for (int i = len; i > max; i--)
    {
        mas[i] = mas[i - 1];
    }
    mas[max] = add;
    len += 1;
    for (int i = 0; i < len; i++)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << '\n';
}
void MyArray::f10(int add)
{
    if (not_empty())
    {
        std::cout << "Array is empty\n";
        return;
    }
    if (len == 20)
    {
        std::cout << "Array is filled\n";
        return;
    }
    int max = 0;
    for (int i = 1; i < len; i++)
    {
        if (mas[i] > mas[max])
        {
            max = i;
        }
    }
    for (int i = len; i > max; i--)
    {
        mas[i] = mas[i - 1];
    }
    mas[max + 1] = add;
    len += 1;
    for (int i = 0; i < len; i++)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << '\n';
}

