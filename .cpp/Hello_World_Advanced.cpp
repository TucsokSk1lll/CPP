#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <ranges>
#include <random> 
#include "windows.h"
#include <ctime>
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
            cout << "\n";
            Sleep(5);
        }
    }    
}
static void Random_szam_hasznalos()
{
    srand(time(NULL));
    vector <string> vct = {"a","b","c","d","e","f","g","h","i","j","k","l","n","o","p","q","r","s","t","u","v","w","x","y","z"," ", "!",",","?","+","-","/","*",";","#","<",">",""};
    string x;
    string y = "hello world!";
    vector <string> z;
    
    for (size_t i = 0; i < y.size(); i++)
    {
        x = y[i];
        while(true)
        {
            string a = vct[rand()%vct.size()];
            for (size_t j = 0; j < z.size(); j++)
            {
                cout << z[j];
            }
            
            cout << a;
            
            if(a == x)
            {
                z.push_back(a);
                cout << "\n";
                break;
                
            }
            cout << "\n";
            Sleep(5);
            
            
        }
        /*Sleep(100);
        system("cls");*/
    }      
}
static void advanced()
{
    srand(time(NULL));
    vector <string> vct = {"a","b","c","d","e","f","g","h","i","j","k","l","n","o","p","q","r","s","t","u","v","w","x","y","z"," ", "!"};
    string x;
    string y = "hello world!";
    vector <string> z;
    
    for (size_t i = 0; i < y.size(); i++)
    {
        x = y[i];
        while(true)
        {
            string a = vct[rand()%vct.size()];
            for (size_t j = 0; j < z.size(); j++)
            {
                cout << z[j];
            }
            

            cout << a;
            //Sleep(10);
            system("cls");

            
            if(a == x)
            {
                z.push_back(a);
                //cout << "\n";
                break;
                
            }
            //cout << "\n";
            
        }
        for (size_t j = 0; j < z.size(); j++)
        {
            cout << z[j];
        }
    }  
       
}
int main()
{
    system("Color 2");
    //advanced();
    Random_szam_hasznalos();
    //Fapados_valtozat();
    
}