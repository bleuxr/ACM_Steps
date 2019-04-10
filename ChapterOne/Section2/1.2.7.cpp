#include<iostream>
using namespace std;

int main(){
    int num,res;
    while(cin>>num){
        if(num==0)
            break;
        res=1;
        while(num%(res*2)==0){
            res*=2;
        }
        cout<<res<<endl;
    }
    return 0;
}
