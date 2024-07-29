#include<iostream>
using namespace std;
class A
{
private:
    void privatefunctionA()
    {
        cout<<"this is private function:"<<endl;
    }
protected:

    void protectedfunctionA()
    {
        cout<<"this is protected function:"<<endl;
    }
public:
    void publicdfunctionA()
    {
        cout<<"this is public function:"<<endl;
    }
    A(int a)//this is the constructor
    {
        cout<<"hello";
    }
};
class AV2 : public A
{
private:
    void privatefunction()
    {
        cout<<"this is private function of AV2:"<<endl;
    }
protected:

    void protectefunction()
    {
        cout<<"this is protected function of AV2:"<<endl;
    }
public:
    void publicfunction()
    {
        cout<<"this is public function of AV2:"<<endl;
        publicdfunctionA();
        protectedfunctionA();
//        privatefunctionA();
    }
//    AV2():A(2)
//    {
//        cout<<"nature:"<<;
//    }
};
int main()
{
    AV2 a;
    A c(2);
//    a.privatefunction();
//    a.protectedfunction();
     a.publicfunction();
    cout<<endl;
    return 0;
}
