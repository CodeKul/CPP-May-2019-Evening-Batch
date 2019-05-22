#include<iostream>
using namespace std;

class Vehicle {
    char *color;
    int top_speed;
    int capacity;
    int speed;
    double fuel_capacity;
    double fuel_level;

    void set_fuel_level(double);
    void set_speed(int);
    void speed_up();
    void speed_down();

    public:
        Vehicle();
        Vehicle(char *, int, int, double);
        void set_color(char *);
        void set_top_speed(int);
        void set_capacity(int);
        void set_fuel_capacity(double);
        char * get_color();
        int get_top_speed();
        int get_capacity();
        double get_fuel_capacity();
        double get_fuel_level();
        int get_speed();
        void accelerate();
        void apply_breaks();
        void turn_right();
        void turn_left();
        void refill_fuel(double);
        void display();
};

Vehicle :: Vehicle() {
    color = "";
    top_speed = 0;
    capacity = 0;
    speed = 0;
    fuel_capacity = 0.0;
    fuel_level = 0.0;
}
Vehicle :: Vehicle(char *color, int top_speed, int capacity, double fuel_capacity) {
    this->color = color;
    this->top_speed = top_speed;
    this->capacity = capacity;
    this->fuel_capacity = fuel_capacity;
    this->speed = 0;
    this->fuel_level = 0.0;
}
void Vehicle :: set_color(char * color) {
        this->color = color;
}
void Vehicle :: set_top_speed(int top_speed) {
    this->top_speed = top_speed;
}
void Vehicle :: set_capacity(int capacity) {
    this->capacity = capacity;
}
void Vehicle :: set_fuel_capacity(double fuel_capacity) {
    this->fuel_capacity = fuel_capacity;
}
char * Vehicle :: get_color() {
    return color;
}
int Vehicle :: get_top_speed() {
    return top_speed;
}
int Vehicle :: get_capacity() {
    return capacity;
}
double Vehicle :: get_fuel_capacity() {
    return fuel_capacity;
}
double Vehicle :: get_fuel_level() {
    return fuel_level;
}
int Vehicle :: get_speed(){
    return speed;
}
void Vehicle :: set_fuel_level(double fuel_level) {
    this->fuel_level = fuel_level;
}
void Vehicle :: set_speed(int speed) {
    this->speed = speed;
}
void Vehicle :: speed_up() {
    speed++;
    fuel_level -= 0.1;
}
void Vehicle :: speed_down() {
    speed--;
}
void Vehicle :: accelerate() {
    if (fuel_level == 0) {
        cout<<"Please rifill the fuel"<<endl;
        return;
    }
    if (speed == top_speed) {
        cout<<"You have reached max speed"<<endl;
    }
    else {
        speed_up();
    }
}
void Vehicle :: apply_breaks() {
    if (speed == 0) {
        cout<<"You are already stopped"<<endl;
    }
    else {
        speed_down();
    }
}
void Vehicle :: turn_right() {
    cout<<"Turning right"<<endl;
}
void Vehicle :: turn_left() {
    cout<<"Turning left"<<endl;
}
void Vehicle :: refill_fuel(double volume) {
    double fuel = fuel_level + volume;
    if (fuel >= fuel_capacity) {
        cout<<"fuel capacity exceeded"<<endl;
        return;
    }
    set_fuel_level(fuel);
}
void Vehicle :: display() {
    cout<<"Color: "<<get_color()<<endl;
    cout<<"Top Speed: "<<get_top_speed()<<endl;
    cout<<"Capacity: "<<get_capacity()<<endl;
    cout<<"Fuel Capacity: "<<get_fuel_capacity()<<endl;
    cout<<"Fuel level: "<<get_fuel_level()<<endl;
    cout<<"Speed: "<<get_speed()<<endl;
}

int main() {

    Vehicle v1("Red", 120, 150, 13);
    v1.display();
    v1.refill_fuel(5.5);
    v1.accelerate();
    v1.accelerate();
    v1.accelerate();
    v1.display();
    v1.apply_breaks();
    v1.apply_breaks();
    v1.display();
    v1.refill_fuel(10);
    v1.display();
    return 0;
}