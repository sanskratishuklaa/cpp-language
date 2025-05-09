#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << left << setw(15) << "Name"
         << setw(10) << "Age"
         << setw(10) << "Score" << endl;

    cout << left << setw(15) << "Alice"
         << setw(10) << 22
         << setw(10) << 87.5 << endl;

    cout << left << setw(15) << "Bob"
         << setw(10) << 25
         << setw(10) << 91.0 << endl;

    cout << left << setw(15) << "Charlie"
         << setw(10) << 19
         << setw(10) << 78.3 << endl;

}
