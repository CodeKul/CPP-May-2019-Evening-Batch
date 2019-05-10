#include<iostream>
using namespace std;

class MyClass {
    int a;
    public:
        MyClass() {                                                 /*Default Constructor*/
            a = 0;
            cout<<"in constructor"<<endl;
        }
        MyClass(int b) {                                            /*Parametrised Constructor*/
            a = b;
            cout<<"in parameterised constructor"<<endl;
        }
        MyClass(MyClass &obj) {                                     /*Copy Constructor,Obj 2 copies value of its 'a' using address of 'a' from obj1*/
            a = obj.a;
            cout<<"in copy constructor"<<endl;
        }
        void setA(int b) {
            a = b;
        }
        void display() {
            cout<<"a: "<<a<<endl;
        }
        ~MyClass() {                                               /*Destructor*/
            cout<<"in destructor - "<<a<<endl;
        }
};

int main() {
   `/*MyClass obj=MyClass()*/                                       /*Links to default Constructor*/
    MyClass obj1(10);
    MyClass obj2(obj1);
    MyClass obj3;

    obj1.display();
    obj2.display();

    obj1.setA(20);

    obj1.display();
    obj2.display();

    return 0;
}
