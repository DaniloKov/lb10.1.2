
//Швидкість світла 2999792 км/с. Яку відстань долає світло за добу, годину?

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double d,h, U, zd,zg;
    d = 24 * 60 * 60;   //перводимо дні в секунди
    h = 60 * 60;        //переводимо години в секунди
    U = 2999792;        //задаємо швидкість
    zd = d * U;         //формула за добу
    zg = h * U;         //формула за годину
    cout << "За добу світло долає:" << zd <<" "<< "км" << endl;
    cout << "За годину світло долає:" << zg << " " << "км";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
