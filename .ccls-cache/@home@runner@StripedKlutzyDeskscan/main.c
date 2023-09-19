#include<stdio.h>
#include<stdlib.h>
int main(){
    int q[10],f=0,r=-1,uv,in,i;
    while (1)
    {
    
    printf("enter your choice\n");
    printf("1.enqueue element\n");
    printf("2.dequeue element\n");
    printf("3.display  element\n");
    printf("4.Exit\n");
    scanf("%d",&in);
    switch (in)
    {
    case 1:
        if(f==(r+1)%10 && r>-1){
            printf("queue overflow\n");
        }
        else{
            printf("enter elment to enqueue\n");
            scanf("%d",&uv);
            r=(r+1)%10;
            q[r]=uv;
            printf("enqueue element %d\n",uv);
        }
        break;
    case 2:
    if (r==(f-1)%10){
        printf("queue underflow\n");
    }
    else{
        printf("dequeued element %d\n",q[f]);
        f=(f+1)%10;
        
    }
    break;

    case 3:
    if(r==(f-1)%10)
				{
					printf("Circular Queue is Empty. Nothing to Display\n");
				}
				else
				{
					i=f;
                     do{
                      printf("%d\t",q[i]);
                      i=(i+1)%10;
          
					}while(i!=(r+1)%10);
					printf("\n");
				}
    break;
    case 4:
    exit(0);
    default:
        break;
    }
    }
}