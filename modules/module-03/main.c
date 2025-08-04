#include <stdio.h>
#include <string.h> // Needed for strcmp(), strcpy(), strlen()

// Define a constant for maximum task length to prevent buffer overflow.
// This is a classic "stack allocated array" - safe as long as we check lengths.
#define MAX_TASK_LENGTH 100

int main(int argc, char *argv[]) {
    // argc tells us HOW MANY arguments were passed (argument count)
    // argv is an ARRAY of strings containing the arguments (argument vector)

    // Always show version if called with no args (besides program name)
    if (argc == 1) {
        // Not enough arguments provided
        printf("Projo - Project Organizer v0.1\n");
        printf("Error: No command provided. Try 'projo help' for usage.\n");
        return 1;
    }

    // Handle `projo help`
    if (strcmp(argv[1], "help") == 0) {
        printf("Projo - Project Organizer v0.1\n");
        printf("Usage:\n");
        printf("  projo help                Show this help message\n");
        printf("  projo version             Show version information\n");
        printf("  projo add \"task desc\"      Add a new task in memory\n");
        return 0;
    }

    // Handle `projo version`
    if (strcmp(argv[1], "version") == 0) {
        printf("Projo - Project Organizer v0.1\n");
        return 0;
    }

    // Handle `projo add "task description"`
    if (strcmp(argv[1], "add") == 0) {
        // Check if enough arguments for description were provided
        if (argc < 3) {
            printf("Projo - Project Organizer v0.1\n");
            printf("Error: No task description provided.\n");
            printf("Usage: projo add \"your task description\"\n");
            return 1;
        }
        // argv[2] is the provided description
        const char *input_task = argv[2];

        // Defensive programming: check if task is too long for our buffer
        if (strlen(input_task) >= MAX_TASK_LENGTH) {
            printf("Projo - Project Organizer v0.1\n");
            printf("Error: Task description is too long (max %d characters).\n", MAX_TASK_LENGTH - 1);
            return 1;
        }

        // Store the task in a buffer allocated on the STACK
        char task[MAX_TASK_LENGTH];
        strcpy(task, input_task); // SAFE because length is checked above

        // Task has been added (in memory). Show it back to user.
        printf("Task added:\n");
        printf("  1. %s\n", task);

        // In this version, if you run the program again, the task is lost, because it's only in memory!
        // We'll add file storage in the next module.

        return 0;
    }

    // Provided argument is not recognized
    printf("Projo - Project Organizer v0.1\n");
    printf("Error: Unknown command '%s'. Try 'projo help'.\n", argv[1]);
    return 1;
}
