#include <iostream>

using namespace std;

int main()
{
    for (int Count = 1; Count <= 100; ++Count) {
        
        if (Count % 3 == 0 and Count % 5 == 0) {
            cout << "Fizzbuzz (The number was " << Count << ")\n";
        }
        else if (Count % 3 == 0) {
            cout << "Fizz (The number was " << Count << ")\n";
        }
        else if (Count % 5 == 0){
            cout << "Buzz (The number was " << Count << ")\n";
        }
    }
}

