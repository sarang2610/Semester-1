
// 33333
// 22222
// 11111
// 32123
// 11111
// 22222
// 33333

#include <stdio.h>
void main(){
    int f=3;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=5;j++){
            if(f<1){
                break;
            }
            printf("%d",f);
		}
		f--;
		printf("\n");
	}
	printf("32123 \n");
	for(int b=1;b<=3;b++){
		 for(int a=1;a<=5;a++){
		     printf("%d",f+1);
		 
		 }
		 f++;
		 printf("\n");
	}
}