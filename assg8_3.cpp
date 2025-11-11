#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance() {
        this->feet = 0;
        this->inch = 0;
    }

    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (+) operator to perform addition of two distance objects
    void operator+(Distance &d2) {
      //  Distance d3;
        this->feet = this->feet + d2.feet;
        this->inch = this->inch + d2.inch;

        //return
     
    }
};

// Driver Code
int main() {

    cout<<"Name: Madhumita Dhairyashil Salokhe"<<endl;
		cout<<"Roll No:28 SY S2"<<endl; 
    Distance d1(8, 9);
    Distance d2(10, 2);
    //Distance d3;

    // Use overloaded operator
    d1 + d2;

    cout << "\nTotal Feet & Inches: " << d1.feet << "'" << d1.inch << endl;
    cout << "\nTotal Feet & Inches: " << d2.feet << "'" << d2.inch << endl;
    return 0;
}
