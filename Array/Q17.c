//17.WAP to show difference between Structure and Union

#include <stdio.h>
#include <string.h>

struct employee{
    int emp_id;
    char emp_name[20];
    float tot_salary;
}emp;

union u_employee{
    int emp_id;
    char emp_name[20];
    float tot_salary;
}union_emp;

int main(){
    printf("enter employee id : ");
    scanf("%d",&emp.emp_id);
    union_emp.emp_id = emp.emp_id;
    printf("enter employee name : ");
    scanf("%s",&emp.emp_name);
    strcpy(union_emp.emp_name, emp.emp_name);

    printf("Enter employee salary :  ");
    scanf("%f",&emp.tot_salary);
    union_emp.tot_salary = emp.tot_salary;

    printf("employee details using structure \n");
    printf("employee id:%d\n",emp.emp_id);
    printf("employee name:%s\n",emp.emp_name);
    printf("employee salary:%.2f \n",emp.tot_salary);

    printf("\nemployee details using union\n");
    printf("employee id:%d\n",union_emp.emp_id);
    printf("employee name:%s\n",union_emp.emp_name);
    printf("employee salary:%.2f \n",union_emp.tot_salary);
}
