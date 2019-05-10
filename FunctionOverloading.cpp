#include<iostream>
using namespace std;

class OverloadingExample {
    int a;
    float b;
    char c;
    public:
        OverloadingExample();
        OverloadingExample(int, float, char);
        void set(int);
        void set(float);
        void set(char);
        void set(int, float, char);
        void display();
};

OverloadingExample :: OverloadingExample() {
    this->a = 0;
    this->b = 0.0;
    this->c = 0;
}

OverloadingExample :: OverloadingExample(int a, float b, char c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void OverloadingExample :: set(int a) {
    this->a = a;
}

void OverloadingExample :: set(float b) {
    this->b = b;
}

void OverloadingExample :: set(char c) {
    this->c = c;
}

void OverloadingExample :: set(int a, float b, char c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void OverloadingExample :: display() {
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
}

int main() {
    OverloadingExample ex1(100, 10.30, 'C');
    ex1.set(10);
    ex1.display();
    return 0;
}