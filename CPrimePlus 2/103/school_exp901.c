// Filename: school_exp901.c
// Created by Yyg on 11/29/2017.
// Desc: 5 stuno + name + 3 grade + avg

#define MAXLEN 1025
typedef char String[MAXLEN];

#include <stdio.h>
#include <stdlib.h>

double get_and_out(char *str1){
    double rev;
    gets(str1);
    rev=atof(str1);     // strtod() more safely
    return rev;
}

void wrt_format(char *str,FILE *fp){
    fputs(str,fp);
    fputs("|",fp);
}

int main(void){
    FILE *ftp = NULL;
    int status =0;
    String name,studentid,grade,avggra;
    double grade_f,averagegrade_f,sum1=0.00;
    char *sheetheader = "|Student ID No|Name|Grade 1|Grade 2|Grade 3|Average Grade|";
    char *spliter =  "|:-----------:|:--:|:-----:|:-----:|:-----:|:-----------:|";
    ftp = fopen("stud.txt","w+");
    fputs(sheetheader,ftp);
    fputs("\n",ftp);
    fputs(spliter,ftp);
    fputs("\n",ftp);
    for (status = 0; status < 5; status++){
        printf("Input the student number:");
        gets(studentid);      // char *studentid; fgets(studentid,10,stdin);
        fputs("|",ftp);
        wrt_format(studentid,ftp);
        printf("Input the name:");
        gets(name);
        wrt_format(name,ftp);
        for (int j = 0; j < 3; ++j) {
            printf("Need Grade:");
            grade_f = get_and_out(grade);
            wrt_format(grade,ftp);
            sum1 += grade_f;
        }
        averagegrade_f = sum1 / 3.00;
        gcvt(averagegrade_f,5,avggra);
        fputs(avggra,ftp);
        fputs("| \n",ftp);
        sum1 = 0.00;
    }
    return 0;
}