#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num,res1,res2;
    int a[101],b[101];
    while(cin>>num){
        if(num==0)
            break;
        for(int i=0;i<num;i++){
            cin>>a[i];
        }
        for(int i=0;i<num;i++){
            cin>>b[i];
        }
        sort(a,a+num);
        sort(b,b+num);
        res1=0;
        res2=0;
        for(int i=0;i<num;i++){
            if(a[i]>b[i]){
                res1+=2;
            }else if(a[i]<b[i]){
                res2+=2;
            }else{
                res1+=1;
                res2+=1;
            }
        }
        cout<<res1<<" vs "<<res2<<endl;
    }
    return 0;
}
