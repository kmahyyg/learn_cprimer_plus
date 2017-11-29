// Filename: school_exp901.c
// Created by Yyg on 11/29/2017.
// Desc: 5 stuno + name + 3 grade + avg

#include <stdio.h>
#include <stdlib.h>

double get_and_out(char *str1){
    double rev;
    gets(str1);
    rev=atof(str1);
    return rev;
}

void wrt_format(char *str,FILE *fp){
    fputs(str,fp);
    fputs("|",fp);
}

int main(void){
    FILE *ftp = NULL;
    int status =1;
    char *sheetheader, *spliter,*name="",*studentid="",*grade1="",*grade2="",*grade3="",*avggra="";
    double grade1_f,grade2_f,grade3_f,averagegrade_f,sum1=0.00;
    sheetheader = "|:Student ID No:|:Name:|:Grade 1:|:Grade 2:|:Grade 3:|:Average Grade:|";
    spliter = "|---------------|------|---------|---------|---------|---------------|";
    ftp = fopen("stud.txt","w+");
    fputs(sheetheader,ftp);
    fputs(spliter,ftp);
    fputs("\n",ftp);
    while (status == 1){
        printf("Input the student number:");
        gets(studentid);
        wrt_format(studentid,ftp);
        printf("Input the name:");
        gets(name);
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
        avggra = gcvt(averagegrade_f,5,avggra);
        fputs(avggra,ftp);
        fputs("|\n",ftp);
        printf("Continue? 1.Y 2.N");
        status = getchar();
    }
    return 0;
}