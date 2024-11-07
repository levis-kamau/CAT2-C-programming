#include<stdio.h>
#include<string.h>

 //structure named employee
 struct employee { 
         char name[25];
         int id;
         char department[20];
         float salary;
         char email[50];
 };

 int main() {
     //A variable of type employee
     struct employee emp;
     
     //Input details for the employee
     printf("Enter employee name:");
     fgets(emp.name, sizeof(emp.name), stdin);
     emp.name[strcspn(emp.name, "\n")]=0;
     
     printf("Enter employee ID:");
     scanf("%d", &emp.id);
     getchar();
     
     printf("Enter department:");
     fgets(emp.department, sizeof(emp.department), stdin);
     emp.department[strcspn(emp.department, "\n")]=0;
     
     printf("Enter salary:");
     scanf("%f", &emp.salary);
     getchar();
     
     printf("Enter email:");
     fgets(emp.email, sizeof(emp.email), stdin);
     emp.email[strcspn(emp.email, "%n")]=0;
     
     // Display the employee details
     printf("\nEmployee Details:\n");
     printf("Name: %s\n", emp.name);
     printf("ID : %d\n", emp.id);
     printf("Department: %s\n", emp.department);
     printf("Salary: %.2f\n", emp.salary );
     printf("Email: %s\n", emp.email);
     
     return 0;
}     
     