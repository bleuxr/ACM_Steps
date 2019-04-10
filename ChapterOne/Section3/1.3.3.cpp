#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

struct node{
    int sol;
    int time;
    int seq;
    int grade;
}arr[101];

bool cmp(node x,node y){
    if(x.sol>y.sol)
        return true;
    else if(x.sol<y.sol)
        return false;
    else return x.time<y.time;
}

bool cmp_seq(node x,node y){
    return x.seq<y.seq;
}

int main(){
    int n,hour,min,sec;
    char ch;
    int count[6];
    while(cin>>n){
        if(n==-1)
            break;
        memset(count,0,sizeof(int)*6);
        for(int i=0;i<n;i++){
            cin>>arr[i].sol>>hour>>ch>>min>>ch>>sec;
            arr[i].time=10000*hour+100*min+sec;
            arr[i].seq=i;
            count[arr[i].sol]++;
        }
        sort(arr,arr+n,cmp);
        for(int i=0;i<6;i++){
            count[i]/=2;
        }
        for(int i=0;i<n;i++){
            arr[i].grade=10*arr[i].sol+50;
            if(count[arr[i].sol]>0&&arr[i].sol!=5&&arr[i].sol!=0){
                arr[i].grade+=5;
                count[arr[i].sol]--;
            }
        }
        sort(arr,arr+n,cmp_seq);
        for(int i=0;i<n;i++)
            cout<<arr[i].grade<<endl;
        cout<<endl;
    }
    return 0;
}
