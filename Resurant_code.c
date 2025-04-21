#include <stdio.h>

void main() {
    // Initialization of variables
    int total = -1;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int vote, max;
    int password;

    while (1) {
        // Displaying the title with a box
        printf("\n\n");
        printf("*******************************************************\n");
        printf("*                                                     *\n");
        printf("*        ELECTION COMMISSION OF INDIA                 *\n");
        printf("*                                                     *\n");
        printf("*******************************************************\n");

        // Displaying the candidates menu
        printf("\n1. Candidate 1      \t\t\t(Party 1)\n");
        printf("2. Candidate 2      \t\t\t(Party 2)\n");
        printf("3. Candidate 3      \t\t\t(Party 3)\n");
        printf("4. Candidate 4      \t\t\t(Party 4)\n");
        printf("5. Display Total Count & Winner\n");

        // Getting user input
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &vote);

        total++;

        // Switch-case to handle vote
        switch (vote) {
            case 1:
                count1++;
                printf("\nYou voted for Candidate 1 (Party 1).\n");
                break;

            case 2:
                count2++;
                printf("\nYou voted for Candidate 2 (Party 2).\n");
                break;

            case 3:
                count3++;
                printf("\nYou voted for Candidate 3 (Party 3).\n");
                break;

            case 4:
                count4++;
                printf("\nYou voted for Candidate 4 (Party 4).\n");
                break;

            case 5:
                // Password check to display results
                while (1) {
                    printf("\nEnter your 4-digit password to view results: ");
                    scanf("%d", &password);

                    if (password != 1234) {
                        printf("Incorrect Password. Try again.\n");
                        continue;
                    } else {
                        // Displaying vote counts
                        printf("\nVOTE COUNT SUMMARY:\n");
                        printf("1. Candidate 1      (Party 1) : %d\n", count1);
                        printf("2. Candidate 2      (Party 2) : %d\n", count2);
                        printf("3. Candidate 3      (Party 3) : %d\n", count3);
                        printf("4. Candidate 4      (Party 4) : %d\n", count4);
                        printf("\nTotal Votes Cast: %d\n", total);

                        // Determining the winner
                        if (count1 > count2 && count1 > count3 && count1 > count4) {
                            max = count1;
                            printf("\nWinner: Candidate 1 (Party 1) with %d votes\n", max);
                        } else if (count2 > count3 && count2 > count4) {
                            max = count2;
                            printf("\nWinner: Candidate 2 (Party 2) with %d votes\n", max);
                        } else if (count3 > count4) {
                            max = count3;
                            printf("\nWinner: Candidate 3 (Party 3) with %d votes\n", max);
                        } else {
                            max = count4;
                            printf("\nWinner: Candidate 4 (Party 4) with %d votes\n", max);
                        }

                        printf("\nThank you for using the E-Voting system.\n");
                        break;
                    }
                }
                break;

            default:
                printf("\nInvalid choice! Please enter a valid option (1-5).\n");
                break;
        }

        // Exit if vote == 5
        if (vote == 5) {
            break;
        }
    }
}
