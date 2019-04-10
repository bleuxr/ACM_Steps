#include<iostream>
using namespace std;

int main(){
    int a,b,res;
    while(cin>>a>>b){
        res=a;
        while(res%b){
            res+=a;
        }
        cout<<res<<endl;
    }
    return 0;
}
