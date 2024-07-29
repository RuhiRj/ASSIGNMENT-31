/*1. Define a class Person with instance members name and age.
Also define member functions setName(), setAge(), getName(), getAge().
Now define class Employee by inheriting Person class. In the Employee class define empid and salary as instance members.
Also define setEmpid, setSalary, getEmpid, getSalary.*/
#include<iostream>
#include<string>
using namespace std;
class person
{
private:
    int age;
    string name;
public:
   void setAge(int a )
    {
        age=a;
    }
    void setName(string nam)
    {
        name=nam;
    }
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
};
    class Employee:public person
    {
    private:
        int empid;
        int salary;
    public:
        void setEmpId(int id)
        {
            empid=id;
        }
        void setSalary(int sal)
        {
             salary=sal;
        }
        int getEmpId()
        {
            return empid;
        }
        int getSalary()
        {
            return salary;
        }

};
int main()
{
    Employee e1,e2,e3;
    e1.setAge(21);
    e1.setName("ruhi");
    e1.setSalary(3400);
    e1.setEmpId(94);
    cout<<e1.getAge();
    cout<<endl;
    cout<<e1.getEmpId();
    cout<<endl;
    cout<<e1.getName();
    cout<<endl;
    cout<<e1.getSalary();
    cout<<endl;
    return 0;
}
