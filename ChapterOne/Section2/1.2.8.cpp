#include<iostream>
using namespace std;

int dig_sum(int num,int dec){
    int sum=0;
    while(num){
        sum+=num%dec;
        num/=dec;
    }
    return sum;
}

int main(){
    int dec10,dec12,dec16;
    for(int i=2991;i<10000;i++){
        dec10=dig_sum(i,10);
        dec12=dig_sum(i,12);
        dec16=dig_sum(i,16);
        if(dec10==dec12&&dec10==dec16)
            cout<<i<<endl;
    }
    return 0;
}
