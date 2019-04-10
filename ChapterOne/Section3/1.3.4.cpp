#include<iostream>
#include<algorithm>
using namespace std;

struct node{
    int price;
    int vol;
}arr[101];

bool cmp(node x,node y){
    return x.price>y.price;
}

int main(){
    int v,n,sum;
    while(cin>>v){
        if(v==0)
            break;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i].price>>arr[i].vol;
        }
        sort(arr,arr+n,cmp);
        sum=0;
        for(int i=0;i<n;i++){
            if(v>arr[i].vol){
                sum+=arr[i].price*arr[i].vol;
                v-=arr[i].vol;
            }else{
                sum+=arr[i].price*v;
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
