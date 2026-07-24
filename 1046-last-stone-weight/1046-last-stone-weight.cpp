class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
int answer=0;
priority_queue<int,vector<int>>q;
int n=stones.size();
int i;
for(i=0;i<n;i++)
q.push(stones[i]);
while(q.size()>1){
auto it=q.top();
q.pop();
int y=it;
if(q.empty()){
break;
}
auto itm=q.top();
q.pop();
int x=itm;
if(x==y){}
else
{q.push(y-x);}
}
if(q.empty()){
answer=0;}
else{
answer=q.top();
}
return answer;     
    }
};