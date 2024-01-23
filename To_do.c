#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DESCRIPTION_LENGTH 100

// Task structure to represent a to-do item
struct Task {
    char description[MAX_DESCRIPTION_LENGTH];
    int completed;
};

// Function prototypes
void showMenu();
void addTask(struct Task tasks[], int* taskCount);
void markComplete(struct Task tasks[], int taskCount);
void displayTasks(const struct Task tasks[], int taskCount);

int main() {
    struct Task tasks[100];  // Assuming a maximum of 100 tasks
    int taskCount = 0;

    while (1) {
        showMenu();

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                markComplete(tasks, taskCount);
                break;
            case 3:
                displayTasks(tasks, taskCount);
                break;
            case 4:
                printf("Exiting the to-do list application.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void showMenu() {
    printf("\n==== To-Do List ====\n");
    printf("1. Add Task\n");
    printf("2. Mark Task as Complete\n");
    printf("3. Display Tasks\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void addTask(struct Task tasks[], int* taskCount) {
    if (*taskCount >= 100) {
        printf("Task limit reached. Cannot add more tasks.\n");
        return;
    }

    printf("Enter task description: ");
    scanf(" %[^\n]s", tasks[*taskCount].description);
    tasks[*taskCount].completed = 0;
    (*taskCount)++;
    printf("Task added successfully.\n");
}

void markComplete(struct Task tasks[], int taskCount) {
    displayTasks(tasks, taskCount);

    int index;
    printf("Enter the index of the task to mark as complete: ");
    scanf("%d", &index);

    if (index >= 0 && index < taskCount) {
        tasks[index].completed = 1;
        printf("Task marked as complete.\n");
    } else {
        printf("Invalid index. Please try again.\n");
    }
}

void displayTasks(const struct Task tasks[], int taskCount) {
    if (taskCount == 0) {
        printf("No tasks available.\n");
    } else {
        printf("\n==== Task List ====\n");
        for (int i = 0; i < taskCount; ++i) {
            printf("[%d] %s %s\n", i, tasks[i].completed ? "[X]" : "[ ]", tasks[i].description);
        }
    }
}
