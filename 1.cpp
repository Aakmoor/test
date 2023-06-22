#include <cstdlib>
#include <ctime>
#include <iostream> 


using namespace std;


int main()
{
  srand(time(nullptr));  // Инициализация ГПСЧ
  const int n=20;
  const int SUMS = n;
  const int NUMS = 2 * n;
  const int MIN = -10;
  const int MAX = 10;


  // Объявление и заполнение массивов
  int nums[NUMS] = { 0 };
  for (int idx = 0; idx < NUMS; idx++)
   {
    nums[idx] = MIN + rand() % (MAX - MIN + 1);
    cout<<nums[idx]<<"   ";
     nums[SUMS] = { 0 };
  for (int idx = 0; idx < SUMS; idx++)
   {
    nums[idx] =nums[SUMS];
     
  
    cout<<"SUMS =  "<<nums[idx]<<"   ";
   }
  
   }
  cout << " \n";
  nums[SUMS] = { 0 };
  for (int idx = 0; idx < SUMS; idx++)
   {
    nums[idx] =nums[SUMS];
     
  
    cout<<"SUMS =  "<<nums[idx]<<"   ";
   }
  
  
  
  return 0;
  }