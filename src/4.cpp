// A simple C++ program to demonstrate how to use classes and objects

#include <iostream>

class Rectangle {
    private:
        int width;
        int height;
    
    public:
        // Constructor
        Rectangle(int w, int h) {
            this->width = w;
            this->height = h;
        }

        // Getter and setter methods
        int getWidth() {
            return this->width;
        }

        void setWidth(int w) {
            this->width = w;
        }

        int getHeight() {
            return this->height;
        }

        void setHeight(int h) {
            this->height = h;
        }
};

int main() {
    // Creating a Rectangle object
    Rectangle rect(5, 7);

    // Printing the area and perimeter of the rectangle
    std::cout << "Area: " << rect.getWidth() * rect.getHeight() << std::endl;
    std::cout << "Perimeter: " << (rect.getWidth() + rect.getHeight()) * 2 << std::endl;

    return 0;
}
