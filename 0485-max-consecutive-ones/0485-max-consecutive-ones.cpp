class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
int count;
int max_c=0;
int n=nums.size();
int i;
for(i=0;i<n;i++){
if(nums[i]==1){count=0;
while(nums[i]==1)
{
count=count+1;
if(i==n-1){break;}
i=i+1;
}
max_c=max(max_c,count);
}
}   
return max_c;
    }
};