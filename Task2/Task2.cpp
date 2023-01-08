// Задание 2
#include <iostream>

class Counter {

private:
    int val;
    // void Incr() 
    //         { 
    //           this->val = val + 1;  
    //         }
    // void Decr() 
    //         { 
    //           this->val = val - 1; 
    //         }

public:
    int GetVal()
    {
        return val;
    }
    void SetVal(int val)
    {
        this->val = val;
    }
    void Incr()
    {
        this->val = val + 1;
    }
    void Decr()
    {
        this->val = val - 1;
    }
    //void Incr() { Incr(); }
    //void Decr() { Decr(); }
    void PrintV() { std::cout << "This val: " << val << std::endl; }
};

int main() {
    char simbol;
    const char plus = '+';
    const char minus = '-';
    const char eq = '=';
    const char x = 'x'; //En



    int a;
    std::string answer;
    Counter counter;

    do
    {
        std::cout << "Do you want to set start value for counter? Enter yes or no: ";
        std::cin >> answer;
    } while (answer != "yes" && answer != "no");


    if (answer == "yes")
    {
        std::cout << " Enter start value: ";
        std::cin >> a;
        counter.SetVal(a);
    }
    if (answer == "no")
    {
        std::cout << "Bye!" << std::endl;
        return 0;
    }


    do
    {

        do
        {
            std::cout << "Enter command ('+', '-', '=' or 'x'): ";
            std::cin >> simbol;

            switch (simbol)
            {
            case plus:
                counter.Incr(); break;
            case minus:
                counter.Decr(); break;
            case eq:
                std::cout << counter.GetVal() << std::endl;
                std::cout << std::endl; break;
            case x:
                std::cout << "Bye!" << std::endl;
                return 0;
            }


        } while (simbol == plus || simbol == minus || simbol == eq || simbol == x);

        std::cout << std::endl;

    } while (true);


    return 0;
}