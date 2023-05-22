#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void printDiamond(int n){
        for(int i=0; i<n;i++){
            for(int j =0 ; j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }

    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
