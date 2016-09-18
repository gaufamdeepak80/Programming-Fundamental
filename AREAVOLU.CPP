/*
Student Name:Dipak Gautam
Subject:Programming Fundamental
Roll:
Program:Write a program to print square  of any nos.
Lab no:01
Date:sep 18,2016
*/
#include<stdio.h>
#include<conio.h>
void main (){
float r,area,volume;
clrscr();
printf("Enter radius of the sphere:\n");
scanf("%f",&r);
area=4*3.14*r*r;
printf("area=%f\n",area);
volume=4/3*(3.14*r*r*r);
printf("volume=%f",volume);
getch();
}