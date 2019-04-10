#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    char c;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>c>>a>>b;
        if(c=='+')
            cout<<a+b<<endl;
        else if(c=='-')
            cout<<a-b<<endl;
        else if(c=='*')
            cout<<a*b<<endl;
        else if(c=='/'){
            if(a%b)
                cout<<fixed<<setprecision(2)<<1.0*a/b<<endl;
            else
                cout<<a/b<<endl;
        }
    }
    return 0;
}
