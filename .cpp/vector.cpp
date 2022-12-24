#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;


int main(){

    vector <int> v = {1,2,3,4,5,6,7,8,9,10};
    vector <int> v2;
    
    for (size_t i = 0; i < v.size(); i++)
    {
        if(count(v.begin()+i,v.begin()+i+1,5))
        {
            v.erase(v.begin()+i);
        }
    }
        
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }    

}