#include <iostream>

using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Setters
    void setWidth(double w) {
        width = w;
    }
    void setLength(double l) {
        length = l;
    }
    // Getters
    double getWidth() const {
        return width;
    }
    double getLength() const {
        return length;
    }

    // Calculate Area
    double calculateArea() const {
        return length * width;
    }

    // Calculate Perimeter
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect;

    // Set dimensions
    rect.setWidth(5.0);
    rect.setLength(10.0);
    // Retrieve and print dimensions
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Length: " << rect.getLength() << endl;

    // Calculate and print area and perimeter
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter();
    return 0;
}