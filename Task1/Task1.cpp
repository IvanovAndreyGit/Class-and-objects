// Задание 1
// Test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Calculator
{
public:
    double num1, num2;

    double add(double num1, double num2)
    {
        double res1 = num1 + num2;
        return res1;
    }

    double multiply(double num1, double num2)
    {
        double res2 = num1 * num2;
        return res2;
    }

    double subtract_1_2(double num1, double num2)
    {
        double res3 = num1 - num2;
        return res3;
    }
    
    double subtract_2_1(double num1, double num2)
    {
        double res4 = num2 - num1;
        return res4;
    }

    double divide_1_2(double num1, double num2)
    {
        double res5 = num1 / num2;
        return res5;
    }
    double divide_2_1(double num1, double num2)
    {
        double res6 = num2 / num1;
        return res6;
    }

    bool set_num1(double num1)
    {
         while (num1 == 0)
        {
            std::cout << "Неверный ввод!" << "\n" << "Введите num1 :";
            std::cin >> num1;
        }
        this->num1 = num1;
        return num1;
    }

    bool set_num2(double num2)
    {
        while (num2 == 0)
        {
            std::cout << "Неверный ввод!" << "\n" << "Введите num2 :";
            std::cin >> num2;
        }
        this->num2 = num2;
        return num2;

    }

};

int main()
{
    Calculator calulator;
    
    double n1;
    double n2;

    do
    {
        std::cout << "Введите num1: ";
        std::cin >> n1;
        calulator.set_num1(n1);
        n1 = calulator.num1;
   
        std::cout << "Введите num2: ";
        std::cin >> n2;
        calulator.set_num2(n2);
        n2 = calulator.num2;
       
        std::cout << "num1 + num2 = " << calulator.add(n1, n2) << std::endl;
        std::cout << "num1 - num2 = " << calulator.subtract_1_2(n1, n2) << std::endl;
        std::cout << "num2 - num1 = " << calulator.subtract_2_1(n1, n2) << std::endl;
        std::cout << "num1 * num2 = " << calulator.multiply(n1, n2) << std::endl;
        std::cout << "num1 / num2 = " << calulator.divide_1_2(n1, n2) << std::endl;
        std::cout << "num2 / num1 = " << calulator.divide_2_1(n1, n2) << std::endl;
    } while (true);
    
}


