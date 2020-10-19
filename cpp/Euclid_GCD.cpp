//enter code
#include<stdio.h>
#include<iostream>
using namespace std;

int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main()
{
 int a,b;
  cin>>a>>b;
  cout<<"GCD of "<<a<<"and "<<b<<"is : "<<gcd(a,b); 
  return 0;
}
