class Solution {
public:
    int secondHighest(string s) {
int n=s.length();
set<int>s1;
int i;
for(i=0;i<n;i++)
{
if(isdigit(s[i]))
{
s1.insert(s[i]-'0');
}
} 
if(s1.size()==1||s1.size()==0)
return -1;
auto it=s1.rbegin();
it++;
return *it;    
    }
};