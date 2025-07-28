#include <stdio.h>
#include <string.h> // Needed for strcmp()

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

    // argv[1] is the FIRST argument after program name
    if (strcmp(argv[1], "help") == 0) {
        // If user typed "projo help"
        printf("Projo - Project Organizer v0.1\n");
        printf("Usage:\n");
        printf("  projo help     Show this help message\n");
        printf("  projo version  Show version information\n");
        return 0;
    } else if (strcmp(argv[1], "version") == 0) {
        // If user typed "projo version"
        printf("Projo - Project Organizer v0.1\n");
        return 0;
    } else {
        // Provided argument is not recognized
        printf("Projo - Project Organizer v0.1\n");
        printf("Error: Unknown command '%s'. Try 'projo help'.\n", argv[1]);
        return 1;
    }
}
