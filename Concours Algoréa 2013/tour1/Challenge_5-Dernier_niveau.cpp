#include<bits/stdc++.h>

/*
* Time complexity:
f(n)=5n
* Worst case: O(n)
*Best case: Ω(n)
*/
int solve(short* A,int n){
    int count[6]={0};
    count[0]=1e6;
    for(int i=0;i<n;++i){
        if(count[A[i]-1] != 0) {
            count[A[i]]++;
            count[A[i]-1]--;
        }
    }


    return count[5];
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