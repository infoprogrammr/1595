#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int count[1000]={0};
    int a[6];
    vector<int> v(2);
    for(int i=0;i<6;i++){ cin>>a[i]; count[a[i]]++;}
    for(int i=0;i<1000;i++){
        if(count[i]%2!=0) v.push_back(i);
    }
    int str=0;
    for(int i=0;i<6;i++){
        if(find(v.begin(),v.end(),a[i])!=v.end()){str++; cout<<a[i]<<" ";}
        if(str==2) break;
    }
  return 0;
}
