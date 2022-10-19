//코딩문제 1) 대출 가능한 책의 정보를 저장하는 프로그램을 작성한다. (5)
#include <stdio.h>
#include "library.h"
int main(int argc, char* argv[])
{
    struct library rec;
    FILE *fp, *fp1;



    fp1 = fopen("../librarytext.txt", "r");
    if (fp1 == NULL) {
        printf("파일열기 오류\n");
    }

    fp = fopen("../library.txt", "w+");
    while (fread(&rec, sizeof(rec), 1, fp1) > 0) {
        fwrite(&rec, sizeof(rec), 1, fp);
    }
    fclose(fp);
    fclose(fp1);
    return(0);
}