#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char ID[15];
    float score;
};

int main() {
    struct student std;

    printf("输入名字:");
    gets(std.name);//接受输入的字符串 
    strcpy(std.ID, "20171120111");//复制字符串
    std.score = 95.5;

    printf("%s %s %2.1f", std.name, std.ID, std.score);

    return 0;
}