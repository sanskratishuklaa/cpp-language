// Write a program in cpp to illustrate the concept of function pointer and call back function:
#include <iostream>
using namespace std;
void A()
{
    cout << "Hello" << endl;
}
void B(void (*ptr)())//function pointer as arguments
{  
    ptr(); // call back function that "ptr" points to
}
int main()
{
    B(A);
    return 0;
}