#include<bits/stdc++.h>
using namespace std;
int solu(vector<int> &nums,int val)
{
    
    for(v=nums.begin();v!=nums.end();v++)
        cout<<*v<<" ";
    return nums.size();
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    vector<int> nums;
    int val,n;
    cin>>val>>n;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        nums.push_back(v);
    }
    cout<<solu(nums,val);
    return 0;
}

