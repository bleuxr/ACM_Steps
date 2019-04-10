#include<iostream>
#include<algorithm>
using namespace std;

struct node{
    int spa;
    int req;
}arr[1001]; 

bool cmp(node x,node y){
    if((x.spa+y.req)!=(y.spa+x.req))
        return (x.spa+y.req)<(x.req+y.spa);
    else
        return x.req<y.req;
}

int main(){
    int t,space,n,flag;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>space>>n;
        for(int j=0;j<n;j++){
            cin>>arr[j].spa>>arr[j].req;
        }
        sort(arr,arr+n,cmp);
        flag=1;
        for(int j=0;j<n;j++){
            if(space>=arr[j].req&&space>=arr[j].spa){
                space-=arr[j].spa;
            }else{
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
