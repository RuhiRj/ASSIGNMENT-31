/*Write a C++ program to calculate the percentage of a student using multi-level inheritance.
Accept the marks of three subjects in base class. A class will be derived from the above mentioned class which includes a
function to find the total marks obtained and another class derived from this class which calculates and displays the percentage of students.*/
#include<iostream>
using namespace std;
class A// This is the base class
{
protected://This is the Protected visibility
    int sub1_marks,sub2_marks,sub3_marks;
public:
    void InputData()
    {

        cout<<"enter the marks of three subjects:";
        cin>>sub1_marks>>sub2_marks>>sub3_marks;
        //cin>>sub2_marks;
        //cin>>sub3_marks;
    }
};
class B:public A
{
public:
    int TotalMarksObtain()
    {
        int total_marks;
        total_marks=(sub1_marks+sub2_marks+sub3_marks);
        return total_marks;
    }
};
class C:public B
{
public:
    void calculatepercentage()
    {
        float percentage_val=0;
        int val=0;
        val=TotalMarksObtain();
        percentage_val=((val*100.0)/300);
        cout<<"total percentage marks of the student is="<<percentage_val<<endl;
    }
};
int main()
{
    C c;
    c.InputData();
    c.calculatepercentage();
    cout<<endl;
    return 0;
}

