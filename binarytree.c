#include<stdio.h>
void main()
{
int pos ,limit,i;
char choice='y';
printf("enter the no of nodes:");
scanf("%d",&limit);
int t[limit+1];
printf("enter the data in the node :");
for(i=1;i<=limit;i++){
scanf("%d",&t[i]);
}

while(choice=='y')

{
printf("enter the position you want to check:");
scanf("%d",&pos);
if(pos/2==0){
 printf("no parent node\n");

 }
else{
printf("parent node is %d\n",t[pos/2]);

}
if((2*pos)>limit){
 printf("no left child node\n");

}
else{
 printf("left child node is %d\n",t[2*pos]);
 
 }
if(((2*pos)+1)>limit){
 printf("no right child node\n");
 
}
else{
 printf("right child node is %d\n",t[2*pos+1]);
 
 }
 printf("Do you want to continue the program:");
 scanf(" %c",&choice);
 if(choice!='y'){
break;
}

 }}
 
 
   








 
