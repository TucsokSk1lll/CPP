#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    //prímszámok kiírása
    vector <int> primes;
    vector <int> primes2;
    vector <int> LKKT;
    
    for (size_t i = 0; i < 1000; i++)
    {
        primes2.push_back(1); 
    }
    for (size_t i = 2; i < 1000; i++)
    {
        for (size_t j = i*2; j < 1000; j +=i)
        {
            primes2[j] = 0;
        }
        
    }
    for (size_t i = 2; i < 1000; i++)
    {
        if(primes2[i])
        {
            //cout << i << " ";
            primes.push_back(i);
        }
    }
    
    //prímtényezők megkeresése
    int x = 2700;
    int y = 400;
    int x2 = x;
    int y2 = y;
    vector <int> prímtényező_x;
    vector <int> prímtényező_y;

    // x prímtényezői
    while(x > 1)
    {
        for (size_t i = 0; i < primes.size(); i++)
        {
            if(x%primes[i] == 0)
            {
                prímtényező_x.push_back(primes[i]);
                x /= primes[i];
            }
        }
    }

    //y prímtényezői
    while(y > 1)
    {
        for (size_t i = 0; i < primes.size(); i++)
        {
            if(y%primes[i] == 0)
            {
                prímtényező_y.push_back(primes[i]);
                y /= primes[i];
            }
        }
    }

    //Vectorok rendezése növekvő sorrendbe
    sort(prímtényező_x.begin(),prímtényező_x.end());
    sort(prímtényező_y.begin(),prímtényező_y.end());

    //x és y prímtényezőinek a kiírása
    cout << "x primtenyezoi:";
    for (size_t i = 0; i < prímtényező_x.size(); i++)
    {
        cout <<  prímtényező_x[i] << " ";
    }
    cout << "\n";

    cout << "y primtenyezoi:";
    for (size_t i = 0; i < prímtényező_y.size(); i++)
    {
        cout <<  prímtényező_y[i] << " ";
    }
    cout << "\n";

    //legnagyobb közös osztó megkeresése
    vector <int> number_x;
    vector <int> db_x; 
    vector <int> number_y;
    vector <int> db_y; 
    vector <int> number_LKKT;
    vector <int> db_LKKT; 
    
    
    if(x2> y2)
    {

        for (size_t i = 0; i < prímtényező_x.size(); i++)
        {
            if(count(number_x.begin(),number_x.end(),prímtényező_x[i]))
            {
                for (size_t j = 0; j < number_x.size(); j++)
                {
                    if(number_x[j] == prímtényező_x[i])
                    {
                        db_x[j]++;
                        break;
                    }
                }
                
            }
            else
            {
                number_x.push_back(prímtényező_x[i]);
                db_x.push_back(1);
            }
        }

        for (size_t i = 0; i < prímtényező_y.size(); i++)
        {
            if(count(number_y.begin(),number_y.end(),prímtényező_y[i]))
            {
                for (size_t j = 0; j < number_y.size(); j++)
                {
                    if(number_y[j] == prímtényező_y[i])
                    {
                        db_y[j]++;
                        break;
                    }
                }
                
            }
            else
            {
                number_y.push_back(prímtényező_y[i]);
                db_y.push_back(1);
            }
        }
        
        
    }
    else
    {
        for (size_t i = 0; i < prímtényező_y.size(); i++)
        {
            LKKT.push_back(prímtényező_y[i]);
        }
    }

    cout << "number_x: ";
    for (size_t i = 0; i < number_x.size(); i++)
    {
        cout << number_x[i] << ' ';
    }
    cout << endl;

    cout << "db_x: ";
    for (size_t i = 0; i < db_x.size(); i++)
    {
        cout << db_x[i] << ' ';
    }
    cout << endl;


    cout << "number_y: ";
    for (size_t i = 0; i < number_y.size(); i++)
    {
        cout << number_y[i] << ' ';
    }
    cout << endl;

    cout << "db_y: ";
    for (size_t i = 0; i < db_y.size(); i++)
    {
        cout << db_y[i] << ' ';
    }
    cout << endl;





    


    cout << "number_LKKT: ";
    for (size_t i = 0; i < number_LKKT.size(); i++)
    {
        cout << number_LKKT[i] << ' ';
    }
    cout << endl;

    cout << "db_LKKT: ";
    for (size_t i = 0; i < db_LKKT.size(); i++)
    {
        cout << db_LKKT[i] << ' ';
    }
    cout << endl;

    

    //LKKT kiírása    
    cout << "LKKT: ";
    for (size_t i = 0; i < LKKT.size(); i++)
    {
        cout << LKKT[i] << ' ';
    }
    
    
    return 0;
}