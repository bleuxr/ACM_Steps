#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    set<int> ans;
    while(scanf("%d",&n),n){
        int a;
        ans.clear();
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(ans.find(a)!=ans.end())
                ans.erase(a);
            else
                ans.insert(a);
        }
        cout<<*ans.begin()<<endl;
    }
    return 0;
}
