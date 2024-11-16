#include<stdio.h>
#include<math.h>


double distance(int x1,int x2,int y1,int y2) {
	return (float) sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
void boundrychecker(int x,int y,int x1,int x2,int y1,int y2) {
	if((x1 <= x && x <= x2) && (y1 <= y && y <= y2))printf("Yes, point lies");
	else printf("No, point not lies");
	}



int main() {
	int x1,x2,y1,y2,ans,x,y;
	printf("x1 :");
	scanf("%d",&x1);
	printf("x2 :");
	scanf("%d",&x2);
	printf("y1 :");
	scanf("%d",&y1);
	printf("y2 :");
	scanf("%d",&y2);

	printf("distance b/w points : %f\n",distance(x1,x2,y1,y2));

	printf("want to check \n1.Rectangle boundary\n2.End\n");
		scanf("%d",&ans);
	if(ans == 1) {
		printf("1.difference points\n2.Enter points\n");
		scanf("%d",&ans);
		switch (ans){
			case 1:
				boundrychecker(x2-x1,y2-y1,x1,x2,y1,y2);
				break;
			case 2:
				printf("x :");
				scanf("%d",&x);
				printf("y :");
				scanf("%d",&y);
				boundrychecker(x,y,x1,x2,y1,y2);
				break;
			default:
				printf("code is ending");
				return 0;
				break;
		}
	}

	return 0;
}