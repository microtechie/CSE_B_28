#/* C++ program to find Area using Function Overloading */
#include <iostream>

using namespace std;

// Function prototypes with corrections
int area(int);
int area(int, int);
float area(float);
float area(float, float);

int main() {
    cout<<"Name: Madhumita Dhairyashil Salokhe"<<endl;
		cout<<"Roll No:28 SY S2"<<endl;  
    // Moved all variables and logic inside the main function
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of a square: ";
    cin >> s; 

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b; 

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    // Output statements with better formatting
    cout << "\nArea of square is " << area(s);
    cout << "\nArea of rectangle is " << area(l, b); 
    cout << "\nArea of circle is " << area(r);
    cout << "\nArea of triangle is " << area(bs, ht) << endl;

    return 0; 
}

// Function to calculate the area of a square
int area(int s) {
    return (s * s);
}

// Function to calculate the area of a rectangle
int area(int l, int b) {
    return (l * b); 
}

// Function to calculate the area of a circle
float area(float r) { 
    return (3.14 * r * r); 
}

// Function to calculate the area of a triangle
float area(float bs, float ht) {
    return ((bs * ht) / 2); 
}
