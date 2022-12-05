#include <iostream>
using namespace std;
int main()
{ 
    int x = 10;
    int y = 5;

    for (size_t i = 0; i < x; i++)
    {
        cout << "x";
    }
    cout << "\n";
    for (size_t i = 0; i < y-2; i++)
    {
        cout << "x";
        for (size_t j = 0; j < x-2; j++)
        {
            cout << " ";
        }
        cout << "x\n";
    }
    for (size_t i = 0; i < x; i++)
    {
        cout << "x";
    }
    cout << "\n";
    
}
