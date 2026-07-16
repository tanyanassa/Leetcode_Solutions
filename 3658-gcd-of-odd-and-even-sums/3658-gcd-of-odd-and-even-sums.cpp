class Solution {
public:
    int gcdOfOddEvenSums(int n) {
int evenn=0;
int oddn=0;
int sumo=0;
int sume=0;
int i=1;
while(1)
{
if(evenn==n&&oddn==n)
{break;}
if(i%2!=0)
{
sumo+=i;
oddn++;
}
else
{
sume+=i;
evenn++;
}
i=i+1;
}  
return gcd(sume,sumo);  
    }
};