#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <ranges>
#include <random> 
#include "windows.h"
using namespace std;

static void Fapados_valtozat()
{
    vector <string> vct = {"a","b","c","d","e","f","g","h","i","j","k","l","n","o","p","q","r","s","t","u","v","w","x","y","z"," ", "!",",","?","+","-","/","*",";","#","<",">",""};
    string x;
    string y = "hello world!";
    vector <string> z;
    for (size_t i = 0; i < y.size(); i++)
    {
        x = y[i];
        for(auto i : vct)
        {
            for (size_t j = 0; j < z.size(); j++)
            {
                cout << z[j];
            }
            
            cout << i;
            if(i == x)
            {
                z.push_back(i);
                cout << "\n";
                break;
                
            }
            else
            {
                
            }
            cout << "\n";
            Sleep(5);
        }
    }    
}

int main()
{
    Fapados_valtozat();
}