#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum, biggestNum;
    cout << "Insert two numbers: " ;
    cin >> firstNum >> secondNum;
    (firstNum > secondNum ? biggestNum = firstNum : biggestNum = secondNum);
    if (biggestNum < 0)
    {
        biggestNum = biggestNum * (-1);
    }

    cout << biggestNum;

    return 0;
}
