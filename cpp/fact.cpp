#include<iostream>
using namespace std;

unsigned int fact(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 

int main()
{ 
   int num=7;
   cout<<" Factorial : "<<fact(num);
   return 0;
}
