#include <ios>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (s == "A+") cout << "4.3";
    else if (s == "A0") cout << "4.0";
    else if (s == "A-") cout << "3.7";
    else if (s == "B+") cout << "3.3";
    else if (s == "B0") cout << "3.0";
    else if (s == "B-") cout << "2.7";
    else if (s == "C+") cout << "2.3";
    else if (s == "C0") cout << "2.0";
    else if (s == "C-") cout << "1.7";
    else if (s == "D+") cout << "1.3";
    else if (s == "D0") cout << "1.0";
    else if (s == "D-") cout << "0.7";
    else cout << "0.0";
}
