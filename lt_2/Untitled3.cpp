#include<bits/stdc++.h>
int x[31],t[31],n;using namespace std;
void khoitao()
{
      cin>>n;
      x[0]=1;
      t[0]=0;
}
void xuat(int k)
{
      for (int i=1;i<k;i++) cout<<x[i]<<" ";
      cout<<x[k]<<'\n';
}
void phantich(int i)
{
      for(int j=((n-t[i-1])/2);j>=x[i-1];j--)
      {
            x[i]=j;
            t[i]=t[i-1]+j;
            phantich(i+1);
      }
      x[i]=n-t[i-1];
      xuat(i);
}
int main()
{
      khoitao();
      phantich(1);
}