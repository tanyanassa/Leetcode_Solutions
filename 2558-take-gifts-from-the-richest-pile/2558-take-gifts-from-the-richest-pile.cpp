class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
long long answer=0;
int n=gifts.size();
int i;
priority_queue<int,vector<int>>q;
for(i=0;i<n;i++){
q.push(gifts[i]);
}      
int k1=0;
while(!q.empty()&&k1!=k)
{
auto it=q.top();
q.pop();
q.push(sqrt(it));
k1=k1+1;
}
while(!q.empty()){
auto im=q.top();
answer+=im;
q.pop();
}
return answer;
    }
};