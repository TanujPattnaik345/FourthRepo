#include <iostream>
using namespace std;
int main()
{
    enum color{white,violet,indigo,blue,green,yellow,orange,red};
    int num;
    cout << "Enter a number between 0 to 7: ";
    cin >> num;
    switch(num)
    {   case white:
    	cout<<"you choice the white color";
    	break;
        case violet:
        cout << "You choosed Violet color";
        break;
        case indigo:
        cout << "You choosed Indigo color";
        break;
        case blue:
        cout << "You choosed Blue color";
        break;
        case green:
        cout << "You choosed Green color";
        break;
        case yellow:
        cout << "You choosed Yellow color";
        break;
        case orange:
        cout << "You choosed Orange color";
        break;
        case red:
        cout << "You choosed Red color";
        break;
        default:
        cout << "You entered a number out of range";
    }
    return 0;
}
