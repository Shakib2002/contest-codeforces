 #include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int l,r;
        cin >> l>>r;

        int count=0;
        while(r!=1){
            r /= 2;
            count++;

        }

        cout<<count<<endl;
    }

}
// import sys

// input = lambda: sys.stdin.readline().rstrip()
// # sys.stdin = open('../input.txt', 'r')
// I = lambda: input()
// II = lambda: int(input())
// MII = lambda: map(int, input().split())
// GMII = lambda: map(lambda x: int(x) - 1, input().split())
// LII = lambda: list(MII())
// LGMII = lambda: list(GMII())
// YN = lambda x: print('YES' if x else 'NO')
// mod = 1000000007
// mod2 = 998244353

// import math
// tcn=1
// tcn = II()
// for _tcn_ in range(tcn):
//     a,b=MII()
//     print(int(math.log2(b)))