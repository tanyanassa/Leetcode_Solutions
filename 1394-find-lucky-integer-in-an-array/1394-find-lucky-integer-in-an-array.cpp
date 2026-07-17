class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
int number=-1;
int n=arr.size();
int i;
map<int,int>mpp;
for(i=0;i<n;i++)
{mpp[arr[i]]++;}
for(auto i : mpp)
{
if(i.first==i.second)
{
number=i.first;
}
}
return number;    
    }
};