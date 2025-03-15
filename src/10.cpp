int main() {
    // Calculate the area of a rectangle with width 5 and height 3
    int area = calculateArea(5, 3);

    // Print the result
    std::cout << "The area is: " << area << std::endl;

    return 0;
}

int calculateArea(int width, int height) {
    return width * height;
}
