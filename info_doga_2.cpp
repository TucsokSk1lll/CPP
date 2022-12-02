#include <iostream>
using namespace std;

static void a1()
{
    int x, y,z;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    
    for (size_t i = x; i < y+1; i++)
    {
        if(i%2 == 1)
        {
            z += i;
        }
    }
    cout << "osszeg: " << z;
}
static void a2()
{
    string x; 
    cout << "Honap neve: ";
    cin >> x;
    for (size_t i = x.length(); i > 0; i--)
    {
        cout << x.substr(0,i) << endl;
    }
    
}
static void a3()
{
    int a = 0;
    int b =0;
    int c = 0;
    string x;
    cout <<"szoveg: ";
    cin >> x;

    for(auto i : x)
    {
        if(i == 'a')
        {
            a++;
        }
        else if (i == 'b')
        {
            b++;
        }
        else if (i == 'c')
        {
            c++;
        }
        
        
    }
    cout << "a: " << a << "\n"  << "b: " << b << "\n" << "c: " << c << "\n";
    
}

int main()
{
    //a1();
    //a2();
    a3();
}