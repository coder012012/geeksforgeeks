#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    vector <int > v= {1, 60, -10, 70, -80, 85};
    sort(v.begin(),v.end());
    int x=v[0],y;
    for(int i=1;i<v.size();i++)
    {
      if(v[i]!=v[0])
      {
        
         y=v[i];
        break;
      }
    }
   cout<<x<<" "<<y;
  }

