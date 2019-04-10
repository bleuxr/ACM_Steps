#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

struct node{
    int l;
    int w;
    bool used;
}arr[5001];

bool cmp(node x,node y){
    if(x.l!=y.l)
        return x.l>y.l;
    else
        return x.w>y.w;
}

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>arr[j].l>>arr[j].w;
            arr[j].used=false;
        }
        sort(arr,arr+n,cmp);
        int p=0,count=0;
        for(int i=0;i<n;i++){
            if(arr[i].used)
                continue;
            count++;
            arr[i].used=true;
            p=i;
            for(int k=i+1;k<n;k++){
                if(arr[k].w<=arr[p].w&&!arr[k].used){
                    arr[k].used=true;
                    p=k;
                }           
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
