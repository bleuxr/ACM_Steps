#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct node{
    int j,f;
    double jf;
}bag[1000];

bool cmp(node x,node y){
    return x.jf>y.jf;
}

int main(){
    int m,n;
    while(cin>>m>>n){
        if(m==-1&&n==-1)
            break;
        for(int i=0;i<n;i++){
            cin>>bag[i].j>>bag[i].f;
            bag[i].jf=1.0*bag[i].j/bag[i].f;
        }
        sort(bag,bag+n,cmp);
        double sum=0;
        for(int i=0;i<n;i++){
            if(m>bag[i].f){
                m-=bag[i].f;
                sum+=bag[i].j;
            }
            else{
                sum+=1.0*bag[i].j*m/bag[i].f;
                break;
            }
        }
        cout<<fixed<<setprecision(3)<<sum<<endl;
    }
    return 0;
}
