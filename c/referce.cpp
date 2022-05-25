#include <iostream>
using namespace std;
int main()
{
    int a;
    int &b = a;

    cout << "Enter the vaue of 'a': ";
    cin >> a;
    cout << "\nThe value of 'a' is " << a << endl;
    cout << "The value of 'b' is " << b<<endl;
    b++;
   
    cout<<b;

    return 0;
}
