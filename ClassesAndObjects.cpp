#include<iostream>
using namespace std;

class MyClass {
    int a;
    public:
        MyClass() {
            a = 0;
            cout<<"in constructor"<<endl;
        }
        MyClass(int b) {
            a = b;
            cout<<"in parameterised constructor"<<endl;
        }
        MyClass(MyClass &obj) {
            a = obj.a;
            cout<<"in copy constructor"<<endl;
        }
        int setA(char c) {
            a = c;
            return a;
        }
        void setA(int b) {
            a = b;
        }

        void setA() {
            a = 0;
        }
        
        void display() {
            cout<<"a: "<<a<<endl;
        }
        int square_a();
        ~MyClass() {
            cout<<"in destructor - "<<a<<endl;
        }
};

int MyClass :: square_a() {
    int b = a*a;
    return b;
}

int main() {

    MyClass obj1(10);
    MyClass obj2(obj1);
    MyClass obj3;

    obj1.display();
    obj2.display();

    obj1.setA(20);

    obj1.display();
    obj2.display();

    cout<<"Square: "<<obj2.square_a()<<endl;

    return 0;
}