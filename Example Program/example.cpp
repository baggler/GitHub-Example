#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declarations
	string strFirstName, strColor, strAdjective;

    // Output and input
    cout << "HELLO, WHAT IS YOUR NAME? ";
    cin >> strFirstName;

    cout << "WHAT IS YOUR FAVORITE COLOR? ";
    cin >> strColor;

	cout << "ENTER AN ADJECTIVE: ";
	cin >> strAdjective;

    cout << endl;
    cout << "SO CAN I CALL YOU " << strAdjective << " "<< strColor << " " << strFirstName << "?" << endl;

    return 0;
}
