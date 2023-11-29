#include <iostream>
using namespace std;
// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15
void pattern(int n){
    for(int i =0;i<n;++i){
        int value = i;
        int increment = n-1;
        for(int j =0;j<i+1;++j){
            cout<<value+1<<" ";
            value = value+increment;
            increment--;
        }
        cout<<endl;
    }
}

int main() {
    // Write C++ code here
   pattern(5);

    return 0;
}