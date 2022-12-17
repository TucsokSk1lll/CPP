#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //prímszámok kiírása
    vector <int> primes;
    vector <int> primes2;
    
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
    int y = 100;
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

    //legnagyobb közös osztó megkeresése
    
    
    
    
        
    

    return 0;
}