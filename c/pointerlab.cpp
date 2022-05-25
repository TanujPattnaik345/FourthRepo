#include <iostream>
using namespace std;
int main()
{
    int a, *b;
    a = 34;
    b = &a;
    void *tr;
    float t=23.3;
    tr=&t;
    cout << "The value of integer 'a' is now: " << a << endl;
    cout << "The value of pointer 'b' is now: " << b << endl;
    *b = 67;
    cout << "The value of integer 'a' is now: " << a << endl;
    cout << "The value of pointer 'b' is now: " << b<<endl;
    cout<<"value of generic pointer"<<*((float*)tr);
    return 0;
}
