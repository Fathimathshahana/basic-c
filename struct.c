#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int age;
    float gpa;
};

int main(){
    struct student *ptr;
    ptr= (struct student *)malloc(sizeof(struct student));
    printf("size allocated is %d",sizeof(struct student));
    if (ptr == NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    printf("\nenter student's name: ");
    scanf("%49s",ptr->name);
    printf("enter student's age: ");
    scanf("%d",&ptr->age);
    printf("enter student's gpa: ");
    scanf("%f",&ptr->gpa);
    printf("\nstudent information: \n");
    printf("name: %s\n",ptr->name);
    printf("age: %d\n",ptr->age);
    printf("gpa: %f\n",ptr->gpa);

    free(ptr);
    return 0;
    }