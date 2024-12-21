#include <bits/stdc++.h>
using namespace std;
vector<int> frequencyCount(vector<int> &arr)
{
    vector<int> res1(arr.size(),0);
    for (int i = 0; i < arr.size(); i++)
    {
        res1[arr[i]-1]++;
    }
    return res1;
    
}
int main()
{
    vector<int> arr = {2, 3, 2, 3, 5};
    vector<int> res = frequencyCount(arr);
    for(auto it:res){
        cout<<it<<" ";
    }
}
