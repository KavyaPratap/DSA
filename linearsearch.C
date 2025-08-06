Linear search
#include <stdio.h>

int main()
{
    int n,loc=0;
  printf("Enter number of elements to enter:\n");
  scanf("%d",&n);
  int arr[n],i,ele;
  printf("Enter elemets of array: ");
  for (i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  printf("Enter element to search: ");
  scanf("%d",&ele);
   
  for (i=0;i<n;i++){
  if(arr[i]==ele){
      printf("%d", ele);
      loc=arr[i];
  }
}
if (loc==0){
    printf("Element not found");
}
}
