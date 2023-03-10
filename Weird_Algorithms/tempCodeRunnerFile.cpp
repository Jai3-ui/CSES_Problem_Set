
#include <iostream>
#include <vector> 
using namespace std;

void solve(int n){
    vector<int> weird;
    
    while(n!=1){

        if(n&1){
            weird.push_back(n);
            n=(3*n+1);
        }

        else{
            weird.push_back(n);
            n/=2;
        }

    }

    weird.push_back(1);

    for(auto& i:weird){
        cout<<i<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}