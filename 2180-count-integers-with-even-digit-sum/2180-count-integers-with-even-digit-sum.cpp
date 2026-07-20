class Solution {
public:
    int countEven(int num) {
int i;
int count=0;
for(i=1;i<=num;i++){
if(i<9){
if(i%2==0){count=count+1;}
}
else
{
int n=i;
int sum=0;
while(n!=0){
sum=sum+(n%10);
n=n/10;
}
if(sum%2==0){
count=count+1;
}
}
}       
return count;
    }
};