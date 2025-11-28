#include <stdio.h>
#include <string.h>

int main() {
    char questions[3][100] = {
        "1. What is the capital of Bangladesh?",
        "2. Who invented C language?",
        "3. What is 2 + 2?"
    };
    char options[3][4][50] = {
        {"A. Dhaka", "B. Chittagong", "C. Rajshahi", "D. Khulna"},
        {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Bill Gates"},
        {"A. 3", "B. 4", "C. 5", "D. 6"}
    };
    char answers[3] = {'A', 'A', 'B'};
    char userAns;
    int score = 0;

    for (int i = 0; i < 3; i++) {
        printf("\n%s\n", questions[i]);
        for (int j = 0; j < 4; j++)
            printf("%s\n", options[i][j]);

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &userAns);

        if (toupper(userAns) == answers[i]) {
            printf(" Correct!\n");
            score++;
        } else {
            printf(" Wrong! Correct answer: %c\n", answers[i]);
        }
    }

    printf("\nFinal Score: %d / 3\n", score);

    FILE *file = fopen("result.txt", "a");
    fprintf(file, "Score = %d/3\n", score);
    fclose(file);

    return 0;
}

