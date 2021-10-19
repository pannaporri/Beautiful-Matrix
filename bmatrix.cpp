#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,r,c,ans;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a;
            if(a==1){
                r=i;
                c=j;
            }
        }
    }
    ans=abs(3-r)+abs(3-c);
    cout<<ans<<endl;
    return 0;
}
