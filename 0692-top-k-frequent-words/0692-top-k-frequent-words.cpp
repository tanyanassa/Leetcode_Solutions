bool compare(pair<string,int>a,pair<string,int>b)
{
if(a.second==b.second)
{
if(a.first<b.first)
{return true;}
else
{return false;}
}
if(a.second>b.second)
{return true;}
else
{return false;}
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k)  {
vector<string>answer;
unordered_map<string,int>mpp;
int i;
int n=words.size();
for(i=0;i<n;i++)
{
mpp[words[i]]++;
}
vector<pair<string,int>>v(mpp.begin(),mpp.end());
sort(v.begin(),v.end(),compare);
int j;
for(j=0;j<k;j++)
{answer.push_back(v[j].first);}
return answer;    
    }
};