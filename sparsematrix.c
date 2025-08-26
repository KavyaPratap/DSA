// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j;
    int arr[5][5]={
                {1,0,2},
                {0,9,3},
                {5,0,0}
                };
int nze=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(arr[i][j]!=0){
            nze++;
        }
    }
}
int sparse[3][nze];
int k=0;
for(i=0;i<3;i++){
    for(j=0;j<nze;j++){
      if(arr[i][j]!=0){
          sparse[0][k]=i;
          sparse[1][k]=j;
          sparse[2][k]=arr[i][j];
          k++;
      }  
    }
}
for(i=0;i<3;i++){
    for(j=0;j<nze;j++){
     printf(" %d ",sparse[i][j]);
      }  
      printf("\n");
    }
}
