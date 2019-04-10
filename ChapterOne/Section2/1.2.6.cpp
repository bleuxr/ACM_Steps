#include<iostream>
using namespace std;

int main(){
    int n;
    char left,right;
    int num,sum,dec,dig;
    while(cin>>n){
        sum=0;
        for(int i=0;i<n;i++){
            cin>>num>>left>>dec>>right;
            int d=0,p=1;
            while(num){
                dig=num%10;
                sum+=p*dig;
                p*=dec;
                num/=10;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
