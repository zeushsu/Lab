#include <stdio.h>
#include <stdlib.h>

/* UI2B64 許少瀚 */

int main(int argc, char *argv[]) {
	int grade, total, student=0, high, low, aver, count, nine=0, eight=0, seven=0, six=0, nul=0;
	
	
    printf("輸入學生成績0~100 輸入-1結束:");
    scanf("%d",&grade);
	while(grade!=-1){
		
		student++;
		total+=grade;
		aver=total/student;
		count=grade/10;
		
	    high=low=grade;
		if(grade>high)high=grade;
		if(grade<low)low=grade;
		
		switch(count){
			case 10:
				nine++;
				break;
			case 9:
				nine++;
				break;
			case 8:
			    eight++;
			    break;
			case 7:
			    seven++;
			    break;
			case 6:
				six++;
				break;
			case 5:
				nul++;
				break;
			case 4:
				nul++;
				break;
			case 3:
				nul++;
				break;
			case 2:
				nul++;
				break;
			case 1:
				nul++;
				break;
			case 0:
				nul++;
				break;
		}
		
	printf("輸入學生成績0~100 輸入-1結束:");
	scanf("%d",&grade);	
				
	}
	printf("學生人數有%d位\n",student);
	printf("最高分:%d\n",high);
	printf("最低分:%d\n",low);
	printf("平均:%d\n",aver);
	printf("90~100人數有%d個\n",nine);
	printf("80~89 人數有%d個\n",eight);
	printf("70~79 人數有%d個\n",seven);
	printf("60~69 人數有%d個\n",six);
	printf("0 ~59 人數有%d個\n",nul);
	
	return 0;
}
