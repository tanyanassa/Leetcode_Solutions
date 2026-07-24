/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
class compare{
public:
bool operator()(ListNode*a,ListNode*b)
{
return a->val>b->val;
}
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
ListNode*head=nullptr;
ListNode*temp=head;
priority_queue<ListNode*,vector<ListNode*>,compare>q;
int n=lists.size();
int i;
for(i=0;i<n;i++){
if(lists[i]!=nullptr)
q.push(lists[i]);
}
while(!q.empty()){
auto it=q.top();
q.pop();
int value=it->val;
if(head==nullptr){
head=it;
temp=head;
}
else{
temp->next=it;
temp=temp->next;
}
if(it->next!=nullptr)
q.push(it->next);
}
return head;       
    }
};