#include <iostream>
using namespace std;
class Shape {
protected:
    float radius, length, width;
public:
    void setCircle() {
        cout<<endl << "----- Circle -----"<<endl;
        cout << "Enter radius: ";
        cin >> radius;   
    }
    void setRectangle() {
        cout<<endl << "----- Rectangle -----"<<endl;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};
class Circle : public Shape {
public:
    void calculate_Area() {
        float area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area<<endl;
    }
};
class Rectangle : public Shape {
public:
    void calculate_Area() {
        float area = length * width;
        cout <<endl << "Area of Rectangle: " << area<< endl;
    }
};
int main(){
    Circle c;
    c.setCircle();
    c.calculate_Area();
    Rectangle r;
    r.setRectangle();
    r.calculate_Area();
    return 0;
}