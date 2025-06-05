#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceName[100], targetName[100];
    char ch;

    // Ask user for source and target file names
    printf("Enter source file name: ");
    scanf("%s", sourceName);

       if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s\n", sourceName);
        return 1;
    }

    printf("Enter target file name : ");
    scanf("%s", targetName);

    // Open source file in read mode
    sourceFile = fopen(sourceName, "r");
 
    // Open target file in write mode
    targetFile = fopen(targetName, "w");
    if (targetFile == NULL) {
        printf("Error: Cannot create target file %s\n", targetName);
        fclose(sourceFile);  // Clean up
        return 1;
    }

    // Read characters from source and write to target
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File copied successfully from %s to %s.\n", sourceName, targetName);

    
    // Close both files
    fclose(sourceFile);
    fclose(targetFile);


     targetFile = fopen(targetName, "r");
    // Read characters from source and write to target
    while ((ch = fgetc(targetFile)) != EOF) {
            printf("%c",ch);

    }


    return 0;
}
