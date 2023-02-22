#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//int main(void) {
//
//	FILE* src;
//	fopen_s(&src,"src.bin","rb");
//	FILE* des;
//	fopen_s(&des, "des.bin", "wb");
//	char buf[20];
//	int readCnt;
//
//	if (src == NULL || des == NULL) {
//		puts("파일 오픈 실패");
//		return -1;
//
//	}
//	
//	while (1) {
//		readCnt = fread((void*)buf, 1, sizeof(buf), src);
//		if (readCnt < sizeof(buf)) {
//			if (feof(src) != 0) {
//				fwrite((void*)buf, 1, readCnt, des);
//				puts("복사 완료");
//				break;
//			}
//			else
//				puts("복사실패");
//			break;
//
//		}
//
//		fwrite((void*)buf, 1, sizeof(buf), des);
//	}
//
//	fclose(src);
//	fclose(des);
//}

//int main(void) {
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp;
//	fopen_s(&fp, "friend.txt", "wt");
//	int i;
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("이름 성별 나이 순 입력:");
//		scanf_s("%s %c %d", name,sizeof(name), &sex,sizeof(sex), &age);
//		getchar();
//		fprintf(fp,"%s %c %d",name,sex,age);
//	}
//
//	fclose(fp);
//	return 0;
//}

//int main(void) {
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp;
//	fopen_s(&fp, "friend.txt", "rt");
//	int ret;
//
//	while (1) {
//		ret = fscanf_s(fp, "%s %c %d", name,sizeof(name), &sex,sizeof(sex), &age);
//		if (ret == EOF)
//			break;
//		printf("%s %c %d\n", name, sex, age);
//
//	}
//	fclose(fp);
//	return 0;
//}

//int main(void) {
//
//	FILE* fp;
//	fopen_s(&fp, "text.txt", "wt");
//	fputs("123456789", fp);
//	fclose(fp);
//
//	fopen_s(&fp,"text.txt", "rt");
//
//	fseek(fp, -2, SEEK_END);
//	putchar(fgetc(fp));
//	fseek(fp, 2, SEEK_SET);
//	putchar(fgetc(fp));
//	fseek(fp, 2, SEEK_CUR);
//	putchar(fgetc(fp));
//	fclose(fp);
//	return 0;
//}

//int main(void) {
//	long fpos;
//	int i;
//
//	FILE* fp;
//	fopen_s(&fp, "text.txt", "wt");
//	fputs("1234-",fp);
//	fclose(fp);
//
//	fopen_s(&fp, "text.txt", "rt");
//	for (i = 0; i < 4; i++)
//	{
//		putchar(fgetc(fp));
//		fpos = ftell(fp);
//		fseek(fp, -1, SEEK_END);
//		putchar(fgetc(fp));
//		fseek(fp, fpos, SEEK_SET);
//	}
//	fclose(fp);
//	return 0;
//}
//char name[30];

//동적 할당하는 이유 1. 함수 호출이 끝나도 메모리는 사라지지 않아야되서 2. 호출을 할때마다 새로운 메모리를 할당을 해야되서

//char * ReadUserName() {
//	
//	char* name = (char*)malloc(sizeof(char) * 30);
//	printf("What's your name?");
//	fgets(name,sizeof(name),stdin);
//	return name;
//
//}

//int main(void) {
//
//	//char* name1;
//	//char* name2;
//	//name1 = ReadUserName();
//	//printf("name1 : %s\n", name1);
//	//name2 = ReadUserName();
//	//printf("name2 : %s\n", name2);
//	//free(name1);
//	//free(name2);
//	
//	int arrlen = 5;
//	int idx = 0;
//	int* arr = (int*)malloc(sizeof(int) * arrlen);
//	while (1) {
//		printf("정수 입력 : ");
//		scanf_s("%d", &arr[idx]);
//		if (arr[idx] == -1)
//			break;
//		if (arrlen == idx + 1) { //배열의 확장 필요성 검사
//			arrlen += 3;
//			arr = (int*)realloc(arr, sizeof(int) * arrlen);
//		}
//		idx++;
//	}
//	for (int i = 0; i < idx; i++)
//		printf("%d", arr[i]);
//	free(arr);
//
//	return 0;
//}

//#define NAME "홍길동"
//#define AGE 24
//#define PRINT_ADDR puts("경기도 용인시");
//
//int main(void) {
//
//
//	printf("이름 :%s\n", NAME);
//	printf("나이 :%d\n", AGE);
//	PRINT_ADDR;
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//
//int main(void) {
//	int num = 20;
//	printf("Square of num : %d\n", SQUARE(num));
//	printf("Square of -5 : %d\n", SQUARE(-5));
//	printf("Square of 2.5 : %g\n", SQUARE(2.5));
//	printf("Square of 3+2 : %d\n", SQUARE(3+2));
//	return 0;
//}

//#define PI 3.14
//#define PROUDCT(X, Y) ((X)*(Y))
//#define CIRCLE_AREA(R) (PROUDCT((R),(R))*PI)
//
//int main() {
//
//	double rad = 2.1;
//	printf("반지름 %g인 원의 넓이: %g\n", rad, CIRCLE_AREA(rad));
//	return 0;
//
//}

//#define DIFF_ABS(X,Y) ((X)>(Y)?(X)-(Y):(Y)-(X))
//
//int main(void) {
//
//	printf("두 값의 차 :%d\n",DIFF_ABS(5,7));
//	printf("두 값의 차 :%g\n", DIFF_ABS(1.8,-1.4));
//
//	return 0;
//
//}

//typedef struct point {
//	int xpos;
//	int ypos;
//
//}Point;
//
//
//void SwapPoint(Point* pos1, Point* pos2) {
//    Point temp;
//    temp = *pos1;
//    *pos1 = *pos2;
//    *pos2 = temp;
//}
//
//int main(void) {
//    Point pos1 = { 2, 4 };
//    Point pos2 = { 5, 7 };
//    SwapPoint(&pos1, &pos2);
//
//    printf("pos1 : %d %d\n", pos1.xpos, pos1.ypos);
//    printf("pos2 : %d %d\n", pos2.xpos, pos2.ypos);
//
//    return 0;
//}
