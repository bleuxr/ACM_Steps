#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[3]={0};
    for(int i=0;i<n;i++){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<"Scenario #"<<i+1<<":"<<endl;
        if((a[0]*a[0]+a[1]*a[1]==a[2]*a[2]))
            cout<<"yes"<<endl<<endl;
        else
            cout<<"no"<<endl<<endl;
    }
    return 0;
}
