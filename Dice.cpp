#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int DiceSides;
    
    cout << "Enter the number of sides on your dice : ";
    cin >> DiceSides;
    cout << "There are " << DiceSides << " sides on your dice\n";
    
    for (int count = 1; count <= 10; ++count) {
        cout << "You rolled a " << (rand() % 10) + 1 << "\n";
    }

}
