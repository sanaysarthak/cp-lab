// Program in C to display employee information (employee id, employee name, employee department) using Structures
#include <stdio.h>

struct employee
{
    int empId;
    char empName[100];
    char empDept[100];
};

int main()
{
    struct employee e1 = {1, "Rajeev", "Sales"};
    struct employee e2= {2, "Sanjeev", "HR"};
    struct employee e3= {3, "Anubhav", "Tech"};

    printf("%d.   %s\t%s\t\n",e1.empId, e1.empName, e1.empDept);
    printf("%d.   %s\t%s\t\n",e2.empId, e2.empName, e2.empDept);
    printf("%d.   %s\t%s\t",e3.empId, e3.empName, e3.empDept);

    return 0;
}
