#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n,x,y,z;
        cin>>n>>x>>y>>z;
        
        long long time1 = (n+(x+y)-1)/(x+y);
        
        long long time2;
        
        if(x*z>=n){
            time2=(n+x-1)/x;
        }else{
            long long rem = n-x*z;
            time2=z+(rem+(x+10*y)-1)/(x+10*y);
        }
        cout<<min(time1,time2)<<"
";
    }
    return 0;
}