#include <stdio.h>

int main() {

int i,j,k,size;
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++)
scanf("%d",&a[i]);
   for(i=0;i<size;i++){
      for(j=i+1;j<size;j++){
         if(a[i]==a[j]){
            for(k=j;k<size;k++){
               a[k]=a[k+1];
            }
            size--;j--;
         }
      }
   }
for(i=0;i<size;i++)
printf("%d ",a[i]);
    return 0;
}
