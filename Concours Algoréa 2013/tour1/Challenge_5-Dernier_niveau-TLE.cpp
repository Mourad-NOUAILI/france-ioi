#include<bits/stdc++.h>

/*
* Time complexity:
f(n)=cnt*n
* Worst case: cnt=n/5 => O(n²)
*Best case: cnt=0 =>Ω(n)
*/
int solve(short* A,int n){
    bool flag=true;
    int cnt=0;
    while(flag){
        short bonus=1;
        flag=false;
        for(int i=0;i<n;++i){
            if(A[i]==bonus) {
                bonus++;
                A[i]=0;
            }
            if(bonus==6) {
                cnt++;
                flag=true;
                bonus=1;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    std::cin>>n;
    short* A=new short[n];
    for(int i=0;i<n;++i) std::cin>>A[i];
    std::cout<<solve(A,n)<<'\n';
    delete[] A;

    return 0;
}