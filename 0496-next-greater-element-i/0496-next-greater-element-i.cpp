class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
int n2=nums2.size();
int i;
vector<int>answer(n2,-1);
stack<int>st;
st.push(0);
for(i=1;i<n2;i++){
if(!st.empty()&&nums2[i]>nums2[st.top()]){
while(!st.empty()&&nums2[i]>nums2[st.top()]){
answer[st.top()]=nums2[i];
st.pop();
}
}
st.push(i);
}
vector<int>ans;
int j;
int n1=nums1.size();
for(i=0;i<n1;i++){
for(j=0;j<n2;j++){
if(nums1[i]==nums2[j]){
ans.push_back(answer[j]);
break;
}
}
}
return ans;    
    }
};