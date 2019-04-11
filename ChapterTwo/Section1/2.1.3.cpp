#include<iostream>
#include<math.h>
using namespace std;

long long gcd(long long a,long long b){
    return b?gcd(b,a%b):a;
}

int main(){
    int n;
    long long a1,a2,b1,b2,fo,x,y;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1>>ch>>b1>>a2>>ch>>b2;
        fo=gcd(a1,b1);
        a1/=fo;
        b1/=fo;
        fo=gcd(a2,b2);
        a2/=fo;
        b2/=fo;
        x=(a1*a2)/gcd(a1,a2);
        y=gcd(b1,b2);
        if(x%y)
            cout<<x<<"/"<<y<<endl;
        else 
            cout<<x/y<<endl;
    }
    return 0;
}
