#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Constructor to initialize the object's value
    Distance(int f, int i) {
      this->feet = f;
      this->inch = i;
    }

    // Overloading (-) operator to perform decrement operation of Distance object
    void operator-() {
        feet--;
        inch--;
        cout << "Feet & Inches (decreament): " << feet << "'" << inch << endl;
    }
};

// Driver Code
int main() {
    cout<<"Name: Madhumita Dhairyashil Salokhe"<<endl;
		cout<<"Roll No:28 SY S2"<<endl; 
    Distance d1(10,12);

    // Using (-) unary operator by single operand
    -d1;
    return 0;
}
