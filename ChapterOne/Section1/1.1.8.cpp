#include<iostream>
using namespace std;

int main(){
    int line,n,a,sum;
    cin>>line;
    for(int i=0;i<line;i++){
        cin>>n;
        sum=0;
        for(int j=0;j<n;j++){
            cin>>a;
            sum+=a;
        }
        if(i)
            cout<<endl;
        cout<<sum<<endl;
        
    }
    return 0;
}
