#include<bits/stdc++.h>
using namespace std;
int main(){
    int no[30+1];
    int no_fr[30+1];
    for(int i=1;i<=30;i++){
        cin >>no[i];
        no_fr[no[i]] =1;
    }
    for(int i=1;i<=30;i++){
        if(no_fr[i] != 1)cout <<i<<endl;
    }
}
