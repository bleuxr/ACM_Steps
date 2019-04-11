#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
const int maxn=1000005;

int main(){
    int arr[maxn];
    int count,num;
    memset(arr,0,sizeof(int)*maxn);
    count=1;
    for(int i=2;i<maxn;i++){
        if(arr[i]==0){
            for(int j=1;i*j<maxn;j++){
                arr[i*j]=count;
            }
            count++;
        }
    }
    while(scanf("%d",&num)!=EOF){
        printf("%d\n",arr[num]);
    }
    return 0;
}
