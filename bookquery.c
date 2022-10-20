//코딩문제 2) 책 정보를 출력하는 프로그램을 작성하시오. (10)
//
//파일 이름 : bookquery.c
//        입력 값에 따라 별도의 정보를 출력
//        입력값
//0 : 모든 책의 정보를 출력
//1 : 대출 가능한 책의 정보를 출력
//2 출판년도 : 출판년도와동일한책을모두출력
//
#include <stdio.h>
#include "library.h"
int main(int argc, char* argv[])
{
    struct library rec;
    FILE *fp, *fp1;



    fp1 = fopen("librarytext.txt", "r");
    if (fp1 == NULL) {
        printf("파일열기 오류\n");
    }

    fp = fopen("library.txt", "w+");
    while (fread(&rec, sizeof(rec), 1, fp1) > 0) {
        fwrite(&rec, sizeof(rec), 1, fp);
    }
    fclose(fp);
    fclose(fp1);
    return(0);
}