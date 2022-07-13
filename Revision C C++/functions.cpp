#include <iostream>
#include <stdio.h>

using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int x=10;
    int y=5;
    int sum=add(x,y);
    cout<<sum<<endl;

}