#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int count = 0;
    
    // O(n³) Example
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                count++;
                cout << i << j << k << " ";
            }
        }
    }
    
    cout << "\nTotal count: " << count; // 27 aayega
    cout << "\nO(n³) = n*n*n = 3*3*3 = 27";
    return 0;
}
