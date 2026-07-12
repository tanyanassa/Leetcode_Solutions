class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
vector<int>answer;
int n = arr.size();
int i;
set<int>s;
for(i=0;i<n;i++)
{
s.insert(arr[i]);
}       
int rank=1;
unordered_map<int,int>mpp;
for(auto i : s)
{
mpp[i]=rank;
rank=rank+1;
}
for(i=0;i<n;i++)
{
if(mpp.find(arr[i])!=mpp.end())
{
answer.push_back(mpp[arr[i]]);
}
else{}
}
return answer;
    }
};