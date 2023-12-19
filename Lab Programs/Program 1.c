#include <stdio.h>
#include <string.h>

// Define the structure for employee details
struct Employee {
    int empId;
    char empName[50];
    float empSalary;
};

// Function to display details of all employees
void displayAllEmployees(struct Employee employees[], int n) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee ID: %d\n", employees[i].empId);
        printf("Employee Name: %s\n", employees[i].empName);
        printf("Employee Salary: %.2f\n\n", employees[i].empSalary);
    }
}

// Function to search for a specific employee by ID
void searchEmployeeById(struct Employee employees[], int n, int targetId) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (employees[i].empId == targetId) {
            printf("\nEmployee found!\n");
            printf("Employee ID: %d\n", employees[i].empId);
            printf("Employee Name: %s\n", employees[i].empName);
            printf("Employee Salary: %.2f\n\n", employees[i].empSalary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nEmployee with ID %d not found.\n\n", targetId);
    }
}

int main() {
    // Maximum number of employees
    const int MAX_EMPLOYEES = 100;

    // Array to store employee details
    struct Employee employees[MAX_EMPLOYEES];

    // Number of employees
    int n;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input details for each employee
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        printf("Employee Name: ");
        scanf("%s", employees[i].empName); // Note: Assumes no spaces in the name
        printf("Employee Salary: ");
        scanf("%f", &employees[i].empSalary);
    }

    // Display all employees
    displayAllEmployees(employees, n);

    // Search for an employee by ID
    int targetId;
    printf("\nEnter the employee ID to search: ");
    scanf("%d", &targetId);
    searchEmployeeById(employees, n, targetId);

    return 0;
}
