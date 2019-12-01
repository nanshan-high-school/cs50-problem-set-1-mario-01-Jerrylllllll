#include <iostream>
using namespace std;

int main() {
    int high;
    do {    
        cout << "高度:";
        cin >> high;        
    } while (high <= 0 || high >= 9);
    
    for (int i = 0; i < high; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";       
        }
        cout << "\n";
    }
}
