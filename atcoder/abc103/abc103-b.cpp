#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[104];
    char ans[104];
    cin >>str>>ans;

    for(int i=0;i<strlen(str)+1;i++){
        
       char temp = str[0];
       int roop = 0;
        for(int j=0;j<strlen(str)-1;j++){
            str[j] = str[j+1];
            roop++;
        }
        str[roop] = temp;

        cout <<str<<endl;
        
        
            cout <<"Yes"<<endl;
            exit(0);
        
    }
    cout <<"No"<<endl;
    return 0;
}
