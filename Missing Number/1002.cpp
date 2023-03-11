#include <iostream>
#include <vector>
using namespace std; 

void solve(){
    int num;
    cin>>num;
    vector<int> arr(num,0);

    for(int i=0;i<num-1;i++){
        int n;
        cin>>n;
        arr[n-1]=1;
    }

    
}

int main(){
    solve();
    return 0;
}