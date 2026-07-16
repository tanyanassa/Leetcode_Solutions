class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
int count=0;
int n=nums.size();
int i;
int number;
for(i=0;i<n;i++)
{
number=nums[i];
while(number!=0)
{
int d=number%10;
if(d==digit)
{
count=count+1;
}
number=number/10;
}
}     
return count;
    }
};