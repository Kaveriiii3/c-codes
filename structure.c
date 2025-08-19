#include<stdio.h>

struct employee{
    int emp_id;
    char emp_name[12];
};

int main(){
    struct employee e1 = {12,"Abhisbek"};
    struct employee *ptr =&e1;

    printf("Employee id:%d\n",ptr->emp_id);
    printf("Employee name:%s\n",ptr->emp_name);

    return 0;

}