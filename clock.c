#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main() {
	int h=0, m=0, s=0;
	int ch=0;
	printf("\n 1.Stopwatch \n 2.Timer \n");
	printf("\n Enter choice: \t ");
	scanf("%d",&ch);
	switch(ch) {
		case 1:
			while(1) {
				system("clear");
				printf("\n Stopwatch: \t ");
				printf("%02d:%02d:%02d",h,m,s);
				s++;
				if(s>59) {
					m++;
					s=0;
				}
				if(m>59) {
					h++;
					m=0;
				}
				sleep(1);
			}
			break;
		case 2:
			printf("\n Enter time in 'hh:mm:ss' format:\t");
			scanf("%d%d%d",&h,&m,&s);
			while(h>=0 && m>=0 && s>=0) {
				system("clear");
				printf("\n Timer: \t ");
				printf("%02d:%02d:%02d",h,m,s);
				s--;
				if(s<0 && m>0) {
					m--;
					s=59;
				}
				if(m<0 && h>0) {
					h--;
					m=59;
				}
				sleep(1);
			}
			if(s < 0) {
				system("clear");
				printf("\n Timer completed!");
				exit(0);
			}
			break;
		default:
			printf("\n Incorrect choice code!\n");
			break;
	}
	return 0;
}
