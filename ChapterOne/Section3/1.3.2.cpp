#include<iostream>
#include<algorithm>
using namespace std;

struct node{
    int b,e;
}t[101];

bool cmp(node x,node y){
    return x.e<y.e;
}

int main(){
    int n;
    while(cin>>n){
        if(n==0)
            break;
        for(int i=0;i<n;i++){
            cin>>t[i].b>>t[i].e;
        }
        sort(t,t+n,cmp);
        int count=1;
        int e=t[0].e;
        for(int i=1;i<n;i++){
            if(t[i].b>=e){
                count++;
                e=t[i].e;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
