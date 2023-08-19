#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    system("color 2");
    //prímszámok kiírása
    vector <int> primes;
    vector <int> primes2;
    int LKKT = 1;
    
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
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    int x2 = x;
    int y2 = y;
    vector <int> primtenyezo_x;
    vector <int> primtenyezo_y;

    // x prímtényezői
    while(x > 1)
    {
        for (size_t i = 0; i < primes.size(); i++)
        {
            if(x%primes[i] == 0)
            {
                primtenyezo_x.push_back(primes[i]);
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
                primtenyezo_y.push_back(primes[i]);
                y /= primes[i];
            }
        }
    }

    //Vectorok rendezése növekvő sorrendbe
    sort(primtenyezo_x.begin(),primtenyezo_x.end());
    sort(primtenyezo_y.begin(),primtenyezo_y.end());

    //x és y prímtényezőinek a kiírása
    cout << "x primtenyezoi:";
    for (size_t i = 0; i < primtenyezo_x.size(); i++)
    {
        cout <<  primtenyezo_x[i] << " ";
    }
    cout << "\n";

    cout << "y primtenyezoi:";
    for (size_t i = 0; i < primtenyezo_y.size(); i++)
    {
        cout <<  primtenyezo_y[i] << " ";
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

        for (size_t i = 0; i < primtenyezo_x.size(); i++)
        {
            if(count(number_x.begin(),number_x.end(),primtenyezo_x[i]))
            {
                for (size_t j = 0; j < number_x.size(); j++)
                {
                    if(number_x[j] == primtenyezo_x[i])
                    {
                        db_x[j]++;
                        break;
                    }
                }
                
            }
            else
            {
                number_x.push_back(primtenyezo_x[i]);
                db_x.push_back(1);
            }
        }

        for (size_t i = 0; i < primtenyezo_y.size(); i++)
        {
            if(count(number_y.begin(),number_y.end(),primtenyezo_y[i]))
            {
                for (size_t j = 0; j < number_y.size(); j++)
                {
                    if(number_y[j] == primtenyezo_y[i])
                    {
                        db_y[j]++;
                        break;
                    }
                }
                
            }
            else
            {
                number_y.push_back(primtenyezo_y[i]);
                db_y.push_back(1);
            }
        }
        
        
    }
    else
    {
        for (size_t i = 0; i < primtenyezo_y.size(); i++)
        {
            number_LKKT.push_back(primtenyezo_y[i]);
        }
    }

    /*cout << "number_x: ";
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
    cout << endl;*/



    for (size_t i = 0; i < number_x.size(); i++)
    {
        number_LKKT.push_back(number_x[i]);
        db_LKKT.push_back(db_x[i]);
    }

    for (size_t i = 0; i < number_y.size(); i++)
    {
        if(count(number_LKKT.begin(),number_LKKT.end(),number_y[i]) == false)
        {
            number_LKKT.push_back(number_y[i]);
            
        }
        
        if(db_LKKT[i] < db_y[i])
        {
            db_LKKT[i] = db_y[i];
        }
        
    }
    
    for (size_t i = 0; i < number_LKKT.size(); i++)
    {
        //cout << pow(number_LKKT[i],db_LKKT[i]) << endl;
        LKKT *= pow(number_LKKT[i],db_LKKT[i]);
    }
    

    /*cout << "number_LKKT: ";
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
    cout << endl;*/

    
    //LKKT kiírása    
    cout << "LKKT: " << LKKT;
    
    
    
    return 0;
}