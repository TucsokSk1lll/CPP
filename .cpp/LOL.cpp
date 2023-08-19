#include <iostream>
using namespace std;

int main() {
    long double m = 1200001540.0; // sleigh's initial mass
    unsigned long long Houses = 5100000000; // total number of houses
    unsigned long long Houses2 = 0; // number of houses visited so far
    unsigned long long s = 117000000; // total distance to travel
    long double F1 = 100; // reindeer power (arbitrary value for demonstration purposes)
    long double V0 = F1 * 2 / 0.25 / 1.27 / 15; // initial speed
    long double s2 = 0.0; // distance between two houses
    long double t = 0; // total time
    long double t2 = 0; // time between two houses

    while (Houses2 < Houses) {
        while (s2 < 20) {
            t2 += 0.01;
            t += 0.01;
            s2 = V0 * t2;
        }

        unsigned long long Houses3 = Houses2;
        Houses2 = s2 / 20;

        if (Houses2 > Houses3) {
            m = m - Houses2 * 4.5 * 3;
            F1 = m / 1000000000;
            V0 = F1 * 2 / 0.25 / 1.27 / 15;
            s2 = 0;
            cout << "Delivered presents to " << Houses2 - Houses3 << " houses\n";
            cout << "Remaining presents mass: " << m << "\n";
            cout << "Current reindeer power: " << F1 << "\n";
        }
    }

    cout << "All presents delivered!\n";
    cout << "Total time: " << t << "\n";
    cout << "Total distance: " << s << "\n";
    cout << "Number of houses visited: " << Houses2 << "\n";

    return 0;
}

