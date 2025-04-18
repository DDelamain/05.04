#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i <= 9; i++) {
        for (int j = 65; j <= 74; j++) {
            char letter = j;
            cout << letter << i << " ";
        }
        cout << "\n";
    }
}
