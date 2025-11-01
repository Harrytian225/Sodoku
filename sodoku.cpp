//
//  main.cpp
//  sodoku
//
//  Created by 田浩宇 on 2025/3/14.
//

#include<iostream>
using namespace std;
int a[10][10],b[10],c[10],d[10],f[10][10][100],k;
int count(int w){
    int sum=0;
    while(w>0){
        sum+=w%2;
        w/=2;
    }
    return sum;
}

int log(int x){
    int sum=0;
    while(x>0){
        sum+=1;
        x/=2;
    }
    return sum-1;
}

bool pd1(){
    if(a[1][1]+a[1][2]+a[1][3]+a[1][4]+a[1][5]+a[2][2]+a[3][2]+a[2][4]+a[3][4]==45)return 1;
    else return 0;
}


bool pd2(){
    if(a[2][5]+a[2][6]+a[2][7]+a[2][8]+a[2][9]+a[3][6]+a[3][8]+a[4][6]+a[4][8]==45)return 1;
    else return 0;
}

bool pd3(){
    if(a[6][5]+a[6][6]+a[6][7]+a[6][8]+a[6][9]+a[7][6]+a[7][8]+a[8][6]+a[8][8]==45)return 1;
    else return 0;
}

bool pd4(){
    if(a[5][1]+a[5][2]+a[5][3]+a[5][4]+a[5][5]+a[6][2]+a[7][2]+a[6][4]+a[7][4]==45)return 1;
    else return 0;
}

bool pd5(){
    if(a[9][2]+a[9][3]+a[9][4]+a[9][5]+a[9][6]+a[7][3]+a[7][5]+a[8][3]+a[8][5]==45)return 1;
    else return 0;
}

bool pd(){
    if((pd1()) and (pd2()) and (pd3()) and (pd4()) and (pd5()))return 1;
    else return 0;
}

void dfs(){
    int cnt=0;
    for(int s=1;s<=9;s++){
        if(b[s]>0)cnt=1;
    }
    if((cnt==0) and (pd())){
        k++;
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++){
            f[i][j][k]=a[i][j];
            }
        }
        return;
    }
    int minc=10,u,v,o;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(a[i][j]==0){
                int x=b[i],y=c[j];
                int z=d[(j-1)/3+(i-1)/3*3+1];
                int w=(x&y)&z;
                if(w==0)return;
                else{
                    int cnt=count(w);
                    if(minc>cnt){
                        minc=cnt;
                        o=w,u=i,v=j;
                    }
                }
            }
        }
    }
    while(o>0){
        int q=o&(-o);
        a[u][v]=log(q)+1;
        b[u]-=q;
        c[v]-=q;
        d[(v-1)/3+(u-1)/3*3+1]-=q;
        dfs();
        a[u][v]=0;
        b[u]+=q;
        c[v]+=q;
        d[(v-1)/3+(u-1)/3*3+1]+=q;
        o=o-q;
    }
}
int main()
{
    for(int i=1;i<=9;i++){
        b[i]=c[i]=d[i]=511;
    }
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cin>>a[i][j];
            if(a[i][j]>0){
                b[i]-=1<<(a[i][j]-1);
                c[j]-=1<<(a[i][j]-1);
                d[(j-1)/3+(i-1)/3*3+1]-=1<<(a[i][j]-1);
            }
        }
    }
    dfs();
    cout<<endl;
    if(k==0)cout<<"无解"<<endl;
    else{
        cout<<endl;
        for(int t=1;t<=k;t++){
            for(int i=1;i<=9;i++){
                for(int j=1;j<=9;j++){
                    cout<<f[i][j][t]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
    cout<<"There are "<<k<<" different solution(s)."<<endl;
}
/*

8 2 0 3 0 6 0 0 4
3 0 0 0 0 2 0 0 0
0 0 0 0 1 0 2 3 0
0 0 3 0 0 0 0 0 2
0 5 0 2 0 0 3 0 0
0 0 2 0 0 3 0 0 0
1 3 0 0 0 0 4 0 0
0 0 0 0 2 0 0 0 0
2 0 0 0 0 0 0 7 9
 
 
 
8 0 2 0 0 6 0 0 4
0 0 0 9 0 2 0 0 0
0 0 0 0 1 0 2 0 0
0 2 3 0 7 0 0 0 0
0 5 0 2 0 0 3 0 0
0 0 2 0 0 0 0 2 0
1 0 0 0 0 0 4 0 2
0 0 0 0 2 0 0 0 3
2 0 0 0 0 0 8 0 9
*/
