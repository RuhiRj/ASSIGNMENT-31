#include<iostream>
using namespace std;

class A
{
private:
    void privatefunctionA()
    {
        cout << "this is private function of A" << endl;
    }
protected:
    void protectedfunctionA()
    {
        cout << "this is protected function of A" << endl;
    }
public:
    void publicfunctionA()
    {
        cout << "this is public function of A" << endl;
    }
    A(int a)   // this is the constructor
    {
        cout << "hello from A constructor with parameter " << a << endl;
    }
};

class AV2 : public A
{
private:
    void privatefunction()
    {
        cout << "this is private function of AV2" << endl;
    }
protected:
    void protectedfunction()
    {
        cout << "this is protected function of AV2" << endl;
    }
public:
    void publicfunction()
    {
        cout << "this is public function of AV2" << endl;
        publicfunctionA();      // Accessing the public function of base class
        protectedfunctionA();   // Accessing the protected function of base class
        // privatefunctionA();  // Cannot access private function of base class
    }

    // Constructor of AV2 calling base class constructor with argument
    AV2() : A(2)
    {
        cout << "hello from AV2 constructor" << endl;
    }
};

int main()
{
    AV2 a;  // This will call AV2 constructor, which in turn calls A constructor with argument 2
    A c(2); // Creating an instance of A directly with argument 2
    // a.privatefunction();     // Error: private member function
    // a.protectedfunction();   // Error: protected member function
    a.publicfunction(); // This will call the public function of AV2
    cout << endl;
    return 0;
}
