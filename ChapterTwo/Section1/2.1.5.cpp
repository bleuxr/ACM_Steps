#include<iostream>
using namespace std;

int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}

int main(){
    int n,a,b,x,y;
    cin>>n;
    while(n--){
        cin>>a>>b;
        x=a/b;
        for(int y=2;;y++){
            if(gcd(x,y)==1){
                cout<<y*b<<endl;
                break;
            }
        }
    }
    return 0;
}
