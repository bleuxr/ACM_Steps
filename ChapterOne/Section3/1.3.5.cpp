#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct node{
    int price;
    int wei;
}arr[1001];

bool cmp(node x,node y){
    return x.price<y.price;
}

int main(){
    int c,n,m;
    double res;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>arr[i].price>>arr[i].wei;
        }
        sort(arr,arr+m,cmp);
        res=0;
        for(int i=0;i<m;i++){
            if(n>(arr[i].price*arr[i].wei)){
                res+=arr[i].wei;
                n-=arr[i].price*arr[i].wei;
            }else{
                res+=(1.0*n/arr[i].price);
                break;
            }
        }
        cout<<fixed<<setprecision(2)<<res<<endl;
    }
    return 0;
}
