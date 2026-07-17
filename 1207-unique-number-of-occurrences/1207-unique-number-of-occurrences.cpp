class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
unordered_map<int,int>mpp;
int n=arr.size();
int i;
for(i=0;i<n;i++)
mpp[arr[i]]++;
set<int>st;
for(auto i : mpp)
{
st.insert(i.second);
}
if(mpp.size()==st.size())
return true;
else
return false;
    }
};