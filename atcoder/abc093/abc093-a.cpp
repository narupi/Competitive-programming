#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[3];
    int frg[3]={0};
    cin >>str[0]>>str[1]>>str[2];
    for(int i=0;i<3;i++){
        if(str[i] == 'a'){frg[0] = 1;}
        else if(str[i] == 'b'){frg[1] = 1;}
        else if(str[i] == 'c'){frg[2] = 1;}
    }
    if(frg[0] == 1 && frg[1] == 1 && frg[2]==1){
        cout <<"Yes"<<endl;
    }
    else {
        cout <<"No"<<endl;
    }
    return 0;



}

