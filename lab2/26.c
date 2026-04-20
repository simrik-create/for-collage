#include <stdio.h>
int main() {
    int choice;
    int pin = 1234, enteredPin;
    float balance = 1000.0, deposit, withdraw;

    printf("===== ATM SYSTEM =====\n");

    // PIN Verification
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access Denied.\n");
        return 0;
    }

    // ATM Menu (persistent loop)
    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                if(deposit > 0) {
                    balance += deposit;
                    printf("Deposit successful.\n");
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if(withdraw > balance) {
                    printf("Insufficient balance.\n");
                } 
                else if(withdraw <= 0) {
                    printf("Invalid withdrawal amount.\n");
                } 
                else {
                    balance -= withdraw;
                    printf("Withdrawal successful.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}