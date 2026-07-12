bool compare(pair<string,int>a,pair<string,int>b)
{
if(a.second>b.second)
{
return true;
}
else
{
return false;
}
}
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
vector<string>answer;
int n=names.size();
int i;
vector<pair<string,int>>p;
pair<string,int>v;
for(i=0;i<n;i++)
{
v={names[i],heights[i]};
p.push_back(v);
}
sort(p.begin(),p.end(),compare);
for(auto i : p)
{
answer.push_back(i.first);
}
return answer;
    }
};