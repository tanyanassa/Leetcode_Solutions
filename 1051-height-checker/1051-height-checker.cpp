class Solution {
public:
    int heightChecker(vector<int>& heights) {
int count=0;
int n=heights.size();
vector<int>s=heights;
sort(s.begin(),s.end());
int i;
for(i=0;i<n;i++)
{
if(heights[i]!=s[i])
{count=count+1;
}
}
return count;
    }
};