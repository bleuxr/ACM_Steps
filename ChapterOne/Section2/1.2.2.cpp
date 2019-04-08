#include<iostream>
using namespace std;

int main(){
    int n,year,times;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>year>>times;
        while(true){
            if((year%4==0&&year%100!=0)||year%400==0)
            {
                times--;
                if(!times)
                {
                    cout<<year<<endl;
                    break;
                }
            }
            year++;
        }
    }
    return 0;
}
