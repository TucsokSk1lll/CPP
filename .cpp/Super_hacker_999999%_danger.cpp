#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <ranges>
#include <random> 
#include "windows.h"
#include <ctime>
using namespace std;

int main()
{
    system("color 2");
    srand(time(NULL));
    while(true)
    {
        cout << rand()%2;
    }
    return 0;
}