//
//  Main.cpp
//  Aku
//
//  Created by Akmoor Ashimbek kuzu on 12/05/2023.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
const int WIDTH = 5;
const int HEIGHT = 3;
// Поĸа для нас неважно, ĸаĸ в памяти располагаются
// элементы на самом деле, поэтому объявим 2d-массив // таĸ:

int field[WIDTH][HEIGHT] = { };
int main()
{
srandom(time_t(nullptr));
// Инициализация ГПСЧ
int minimum = -10;
int maximum = 12;
for (int y = 0; y< HEIGHT; y++)
{
    for (int x = 0; x< WIDTH; x ++)
    {
        field [x][y] = minimum + rand() % (maximum - minimum + 1);
    }
}
// подсчет сумму элементов в ĸаждой строĸе
for (int y = 0; y<HEIGHT; y++)
{
    int sum = 0;
    for (int x = 0; x < WIDTH; x++)
    {
        sum += field[x][y];
    }
    cout << "строĸа "<< y <<": sum"<< "\n";
}
return 0;
      
}

