/*Write a C++ program to add two numbers using single inheritance.
Accept these two numbers from the user in base class and display the sum of these two numbers in derived class. */
#include<iostream>
using namespace std;
class A
{
protected:
    int a,b;
    void inputData()
    {
        cout<<"enter the two numbers:";
        cin>>a>>b;
    }
};
class B:public A
{
public:
    int SumValue()
    {
        inputData();
        int sum=0;
        sum=a+b;
        return sum;
    }
};
int main()
{
    B b;
    cout<<b.SumValue();
    cout<<endl;
    return 0;
}

