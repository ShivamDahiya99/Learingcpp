#include <iostream>
using namespace std;
int main()
{
    int num=13;
    if(num<=1){
        cout<<"not a prime";
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0){
            cout<<"not a prime number";
            return 0;
        }
    }
    cout<<"prime number";
}