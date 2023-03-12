#include <iostream> 
#include <math.h>
using namespace std;


void solve(){
    string str;
    cin>>str;
    int len=str.size();
    if(len==1){
        cout<<1<<endl;
    }

    else{
        int maxi=1,i=0,j=1;

    while(j<len){

        if(str[i]==str[j]){
            j++;
            maxi=max(maxi,j-i);
        }

        else{
            maxi=max(maxi,j-i);
            i=j;
            j++;
        }

    }
    cout<<maxi<<endl;

    }
    
}

int main(){
    solve();
    return 0;
}