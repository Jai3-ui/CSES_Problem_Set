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

    for(int i=0;i<num;i++){
        if(arr[i]==0){
            cout<<i+1<<endl;
            break;
        }
    }

    
}

int main(){
    solve();
    return 0;
}
