#include<stdio.h>
#include<math.h>

int main() {
    int a,c=0;
    scanf("%d",&a);
    int b=a;
    for(int i=0;i<7;i++,c++){
    	b/=3;
    	if(b==1) break;
	}
    for(int i=0; i<a; i++) {
        for(int j = 0; j<a; j++) {
        	if(j%(int)(pow(3,7))>=(int)(pow(3,6))&&j%(int)(pow(3,7))<(int)(pow(3,6))*2&&i%(int)(pow(3,7))>=(int)(pow(3,6))&&i%(int)(pow(3,7))<(int)(pow(3,6))*2) printf(" ");
        	else if(j%(int)(pow(3,6))>=(int)(pow(3,5))&&j%(int)(pow(3,6))<(int)(pow(3,5))*2&&i%(int)(pow(3,6))>=(int)(pow(3,5))&&i%(int)(pow(3,6))<(int)(pow(3,5))*2) printf(" ");
        	else if(j%(int)(pow(3,5))>=(int)(pow(3,4))&&j%(int)(pow(3,5))<(int)(pow(3,4))*2&&i%(int)(pow(3,5))>=(int)(pow(3,4))&&i%(int)(pow(3,5))<(int)(pow(3,4))*2) printf(" ");
        	else if(j%(int)(pow(3,4))>=(int)(pow(3,3))&&j%(int)(pow(3,4))<(int)(pow(3,3))*2&&i%(int)(pow(3,4))>=(int)(pow(3,3))&&i%(int)(pow(3,4))<(int)(pow(3,3))*2) printf(" ");
        	else if(j%(int)(pow(3,3))>=(int)(pow(3,2))&&j%(int)(pow(3,3))<(int)(pow(3,2))*2&&i%(int)(pow(3,3))>=(int)(pow(3,2))&&i%(int)(pow(3,3))<(int)(pow(3,2))*2) printf(" ");
        	else if(j%(int)(pow(3,2))>=(int)(pow(3,1))&&j%(int)(pow(3,2))<(int)(pow(3,1))*2&&i%(int)(pow(3,2))>=(int)(pow(3,1))&&i%(int)(pow(3,2))<(int)(pow(3,1))*2) printf(" ");
			else if(j%3==1&&i%3==1) printf(" ");
            else printf("*");
        }
        puts("");
    }
}
