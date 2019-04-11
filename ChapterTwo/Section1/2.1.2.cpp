#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,num,count,flag;
    while(cin>>n){
        count=0;
        for(int i=0;i<n;i++){
            cin>>num;
            flag=1;
            for(int j=2;j<=sqrt(num);j++){
                if(num%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
