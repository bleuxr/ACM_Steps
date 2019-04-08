#include<iostream>
using namespace std;

int main(){
    int line;
    long int r,e,c,res;
    cin>>line;
    for(int i=0;i<line;i++){
        cin>>r>>e>>c;
        res=e-r;
        if(res>c)
            cout<<"advertise"<<endl;
        else if(res<c)
            cout<<"do not advertise"<<endl;
        else
            cout<<"does not matter"<<endl;
    }
    return 0;
}
