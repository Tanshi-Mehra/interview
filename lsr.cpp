#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>res;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            res.push_back(v[i]);
        }
        else if(s.size()>0 && s.top()<v[i])
        {
            res.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=v[i])
        {
            while(s.size()>0 && s.top()>=v[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                res.push_back(v[i]);
            }
            else{
                res.push_back(s.top());
            }
        }
        s.push(v[i]);
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}