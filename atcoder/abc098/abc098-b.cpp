#include<bits/stdc++.h>
#include<map>
using namespace std;
map<char ,int>mp;

void init_map(){
    mp['a']=0;
    mp['b']=0;
    mp['c']=0;
    mp['d']=0;
    mp['e']=0;
    mp['f']=0;
    mp['g']=0;
    mp['h']=0;
    mp['i']=0;
    mp['j']=0;
    mp['k']=0;
    mp['l']=0;
    mp['m']=0;
    mp['n']=0;
    mp['o']=0;
    mp['p']=0;
    mp['q']=0;
    mp['r']=0;
    mp['s']=0;
    mp['t']=0;
    mp['u']=0;
    mp['v']=0;
    mp['w']=0;
    mp['x']=0;
    mp['y']=0;
    mp['z']=0;
}
using namespace std;
int main(){
    int ans = 0;
    int max = 0;
    int n;


    char s[101];


    cin >>n;
    cin >>s;

    char temp[101];
    //区切り全探で通る説
    for(int i=1;i<n;i++){
        //left register
        for(int n=0;n<i;n++){
            mp[s[n]]=1;
        }

        //right serch 
        for(int j=i;j<n;j++){
            if(mp[s[j]] == 1){
                ans++;
                mp[s[j]]++;
            }
        }

        if(max < ans){
            max = ans;
            init_map();
        }
        ans=0;
    }
    cout <<max<<endl;
}
