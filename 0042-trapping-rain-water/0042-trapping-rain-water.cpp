class Solution {
public:
    int trap(vector<int>& height) {
int n=height.size();
int i;
int water=0;
vector<int>lmax(n,0);
vector<int>rmax(n,0);
for(i=1;i<n;i++)
{
lmax[i]=max(lmax[i-1],height[i-1]);
}  
i=n-2;
while(i>=0)
{
rmax[i]=max(rmax[i+1],height[i+1]);
i=i-1;
}
for(i=0;i<n;i++)
{
int d=min(lmax[i],rmax[i]);
if(d-height[i]<=0){
continue;
}
else{
water=water+(d-height[i]);
}
}
return water;
    }
};