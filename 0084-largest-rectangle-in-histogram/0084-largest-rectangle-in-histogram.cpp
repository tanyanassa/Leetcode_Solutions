class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
int n=heights.size();
int i;
int j;
vector<int>ans1(n,n);
vector<int>ans2(n,-1);  
stack<int>st;
st.push(0);
for(i=1;i<n;i++){
if(!st.empty()&&heights[i]<heights[st.top()]){
while(!st.empty()&&heights[i]<heights[st.top()]){
ans1[st.top()]=i;
st.pop();
}
}
st.push(i);
}
stack<int>s;
s.push(n-1);
for(i=n-2;i>=0;i--){
if(!s.empty()&&heights[i]<heights[s.top()]){
while(!s.empty()&&heights[i]<heights[s.top()]){
ans2[s.top()]=i;
s.pop();
}
}
s.push(i);
}
int max_area=INT_MIN;
for(i=0;i<n;i++){
int diff=ans1[i]-ans2[i]-1;
int ans=diff*heights[i];
max_area=max(max_area,ans);
}
return max_area;
    }
};