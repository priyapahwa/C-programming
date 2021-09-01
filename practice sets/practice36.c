#include <stdio.h>
int main()
{
    // // declare and initialize an array
    // int arr[3][2] = {{50, 60}, {70, 80}, {90, 100}};

    // // display 2D array using for loop
    // printf("The Array elements are:\n");

    // // outer loop for row
    // for (int i = 0; i < 3; i++)
    // {
    //     // inner loop for column
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n"); // new line
    // }

    // to take input from user
    int n_students = 3;
    int n_subjects = 5;
    int marks[3][5]; //2D array
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of student %d in subject %d \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    // display 2D array using for loop
    printf("The Array elements are:\n");

    // outer loop for row
    for (int i = 0; i < n_students; i++)
    {
        // inner loop for column
        for (int j = 0; j < n_subjects; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n"); // new line
    }
    return 0;
}
