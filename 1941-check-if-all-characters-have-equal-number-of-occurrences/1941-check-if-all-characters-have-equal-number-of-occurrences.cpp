class Solution {
public:
    bool areOccurrencesEqual(string s) {
int n=s.length();
int i;
unordered_map<char,int>mpp;
for(i=0;i<n;i++)
mpp[s[i]]++;
int a;
a=mpp[s[0]];
for(auto i : mpp)
{
if(i.second==a)
{}
else
{return false;}
}     
return true;
    }
};