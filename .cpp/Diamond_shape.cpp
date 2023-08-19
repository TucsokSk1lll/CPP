using namespace std;
#include <windows.h>
#include <iostream>
#include <typeinfo>


int main()
{
    system("color 2");
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    
    while(true)
    {
        for (size_t i = 0; i < columns/2; i++)
        {
            GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
            columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
            rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
            
            for (size_t j = 0; j < i; j++)
            {
                cout << ' ';
            }
            
            cout << 'x';
            for (size_t j = 0; j < columns/2-i-1; j++)
            {
               cout << ' ';
            }
            
            
           for (size_t j = columns-i*2-3; j >= 0; j-=2)
           {
                if(j > 2000)
                {
                    break;
                }
                cout << ' ';
           }
           cout << 'x' << endl;
        }
        for (size_t i = 0; i < columns/2; i++)
        {
            GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
            columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
            rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
            
            for (size_t j = columns/2-i-1; j > 0; j--)
            {
                cout /*<< j*/ << ' ';
            }
            cout << 'x';
            
            for (size_t j = 0; j < i; j++)
            {
                cout << ' ';
            }
            //cout << endl;

            for (size_t j = 0; j < i; j++)
            {
                cout << ' ';
            }
            cout << 'x' << endl;
        }
    }
    return 0;
}