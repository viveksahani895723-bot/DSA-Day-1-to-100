#include <iostream>
using namespace std;

int main() {
    int n = 16;
    int count = 0;
    
    // O(log n) Example - Day 10 Complete
    cout << "O(log n) Output: ";
    for(int i=1; i<n; i = i*2){
        count++;
        cout << i << " ";
    }
    
    cout << "\nTotal steps: " << count; // 4 aayega
    cout << "\nn = 16, log2(16) = 4";
    cout << "\nO(n) hota toh 16 baar chalta";
    cout << "\nO(log n) sirf 4 baar chala - FAST!";
    cout << "\nITM Gwalior - DSA Journey Day 10 Done";
    return 0;
}
