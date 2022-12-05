#include <iostream>
using namespace std;

int main()
{
    int sorok = 6;
    if(sorok%2 == 1)
    {
        for (size_t i = 1; i < sorok*2; i+=2) 
        {
            int x = i/2;
            for (size_t i = sorok-x-1; i > 0; i--)
            {
                cout << " ";
            }
            for (size_t j = 0; j < i; j++)
            {
                cout << "x";
            }
            cout << endl;
        }
    }
    else if(sorok%2 == 0)
    {   
        for (size_t i = 2; i < sorok*2+1; i+=2) 
        {
            int x = i/2;
            for (size_t i = sorok-x; i > 0; i--)
            {
                cout << " ";
            }
            for (size_t j = 0; j < i; j++)
            {
                cout << "x";
            }
            cout << endl;
        }
    }
    
    
}