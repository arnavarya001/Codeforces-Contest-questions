#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                arr[i+1]=arr[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}