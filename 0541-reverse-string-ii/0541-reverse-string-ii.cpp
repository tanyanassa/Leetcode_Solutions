class Solution {
public:
    string reverseStr(string s, int k) {
if(s.length()<k)
{reverse(s.begin(),s.end()); return s;}
int n=s.length();
int i=0;
while(i<n)
{
if(i+k>n)
{
reverse(s.begin()+i,s.end());
break;
}
reverse(s.begin()+i,s.begin()+i+k);
i=i+(2*k);
}     
return s;  
    }
};