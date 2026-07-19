class Solution {
public:
    int maxPower(string s) {
if(s.length()==0){return 0;}
int count=0;
int max_c=1;
int n=s.length();
int i;
for(i=0;i<n;i++){
if(i<=n-2&&s[i]==s[i+1]){count=1;
while(i<=n-2&&s[i]==s[i+1])
{count=count+1;
i=i+1;}
}
max_c=max(max_c,count);
}     
return max_c;
    }
};