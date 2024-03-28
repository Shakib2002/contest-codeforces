#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string hour =s.substr(0,2);
    int h=stoi(hour),
    string ap = "";
    if(h>12){
        h=h-12;
        ap = "PM";
    }
    else if(h==0){
        h=12;
        ap= "AM";
    }
    else if(h==12)
    ap="12";
else ap="AM";
s[1]=static_cast>(h%10 + '0');
h/=10;
s[0]=static_cast<char>(h%10 + '0');
cout<<s<<" "<<ap<<endl;
}
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     solve();
  return 0;
 }