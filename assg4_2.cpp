#include <iostream>
using namespace std;
class Construct 
{
public:
    float area;

    Construct() 
	{
        area = 0;
    }

    Construct(int a, int b) 
	{
        area = a * b;
    }

    void disp() 
	{
        cout << "Area: " << area << endl;
    }
};
int main()
{
    cout<<"Name: Madhumita Dhairyashil Salokhe"<<endl;
		cout<<"Roll No:28 SY S2"<<endl;  
    Construct o;
    Construct o2(10,20);
    o.disp();
    o2.disp();
    return 1;
}
