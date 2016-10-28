#include <iostream>

using namespace std;

int main()
{
    int userNum, result;
    cout << "Pick a number from 1 to 9: ";
    cin >> userNum;
    switch(userNum)
    {
    case 1:
    case 2:
    case 3: result = userNum * 10;
        cout << result << endl;
        break;
    case 4:
    case 5:
    case 6: result = userNum * 100;
        cout << result << endl;
        break;
    case 7:
    case 8:
    case 9: result = userNum * 1000;
        cout << result << endl;
        break;
    default: cout << "Invalid input" << endl;
    }
    return 0;
}
