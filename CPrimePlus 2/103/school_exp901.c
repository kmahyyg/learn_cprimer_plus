// Filename: school_exp901.c
// Created by Yyg on 11/29/2017.
// Desc: 5 stuno + name + 3 grade + avg

#define MAXLEN 1025
typedef char String[MAXLEN];

#include <stdio.h>
#include <stdlib.h>

double get_and_out(char *str1){
    double rev;
    fgets(str1,1024,stdin);
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
    String name,studentid,grade1,grade2,grade3,avggra;
    double grade1_f,grade2_f,grade3_f,averagegrade_f,sum1=0.00;
    char *sheetheader = "|Student ID No|Name|Grade 1|Grade 2|Grade 3|Average Grade|";
    char *spliter =  "|:-----------:|:--:|:-----:|:-----:|:-----:|:-----------:|";
    ftp = fopen("stud.txt","w+");
    fputs(sheetheader,ftp);
    fputs("\n",ftp);
    fputs(spliter,ftp);
    fputs("\n",ftp);
    for (status = 0; status < 3; status++){
        printf("Input the student number:");
        fgets(studentid,20,stdin);      // char *studentid; fgets(studentid,10,stdin);
        fputs("|",ftp);
        wrt_format(studentid,ftp);
        printf("Input the name:");
        fgets(name,100,stdin);
        wrt_format(name,ftp);
        printf("Need grade:");
        grade1_f = get_and_out(grade1);
        wrt_format(grade1,ftp);
        sum1 += grade1_f;
        printf("Need grade:");
        grade2_f = get_and_out(grade2);
        wrt_format(grade2,ftp);
        sum1 += grade2_f;
        printf("Need grade:");
        grade3_f = get_and_out(grade3);
        wrt_format(grade3,ftp);
        sum1 += grade3_f;
        averagegrade_f = sum1 / 3.00;
        gcvt(averagegrade_f,5,avggra);
        fputs(avggra,ftp);
        fputs("| \n",ftp);
    }
    return 0;
}