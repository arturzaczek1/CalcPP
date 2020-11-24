#include <iostream>
#include <limits>

using namespace std;



int main()
{
    int
    firstValue,
    secondValue,
    result;

    int calculator(int firstValue, int secondValue, string sign);
    int main();

    string sign;
    const string DIALOG_RESULT = "result equals: ";
    const string DIALOG_START = "--------------------------------------\ncalculator app \ntype first value: ";

    cout << DIALOG_START << endl;
    cin >> firstValue;
    cout << "type second value: " << endl;
    cin >> secondValue;
    while (!cin.good())
    {
        cout << "at least one of values is not number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        main();
    }
    cout << "please choose operation (+,-,*,/):"<< endl;
    cin >> sign;
    if(secondValue == 0 && sign == "/")
    {
        cout << "division by zero is not possible" << endl;
        main();
    }
    if (sign == "+" || sign == "-" ||sign == "*" ||sign == "/" )
    {
        result = calculator(firstValue, secondValue, sign);
        cout <<  DIALOG_RESULT << result << endl;
        main();
    }
    cout << "wrong sign \nplease choose operation (+,-,*,/):" << endl;
    main();
    return 0;
}

int calculator(int firstValue, int secondValue, string sign)
{
    int result = 0;
    if(sign == "+")
    {
        result = firstValue + secondValue;
    }
    else if(sign == "-")
    {
        result = firstValue - secondValue;
    }
    else if(sign == "*")
    {
        result = firstValue * secondValue;
    }
    else if(sign == "/")
    {
        result = firstValue / secondValue;
        /*     int modulo = 0;
             modulo = firstValue % secondValue; */
    }
    return result;
}

