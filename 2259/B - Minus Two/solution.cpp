#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==1)
                a++;
            else if(x%4==0)
                b++;
            else
                c++;
        }
        cout<<max(a,max(b,c))<<endl;
    }
 
    return 0;
}