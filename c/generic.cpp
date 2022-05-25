#include <iostream>
using namespace std;
int main()
{
    int x=6, *y;
    void *z;
    y=&x;
    *y=8;
    z=y;
    cout << "The value of integer pointer 'y' is " << *y << endl;
    cout << "The value of generic pointer 'z' is " << z << endl;
    return 0;
}
