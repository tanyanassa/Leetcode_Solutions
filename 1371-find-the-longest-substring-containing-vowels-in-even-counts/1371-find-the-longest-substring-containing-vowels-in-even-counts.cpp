class Solution {
public:
    int findTheLongestSubstring(string s) {
if(s.length()==1){
return 0;
}
int max_len=INT_MIN;
int n=s.length();
int i;
int mask=0;
unordered_map<char,int>mp;
mp['a']=0;
mp['e']=1;
mp['i']=2;
mp['o']=3;
mp['u']=4;
unordered_map<int,int>mpp;
mpp[0]=-1;
for(i=0;i<n;i++)
{
if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e')
{
mask=mask^(1<<mp[s[i]]);
}
if(mpp.find(mask)==mpp.end())
{mpp[mask]=i;
}
else
{
max_len=max(max_len,i-mpp[mask]);
}
}
return max_len;
    }
};