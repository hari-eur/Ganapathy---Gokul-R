#include <stdio.h>
#include <stdlib.h>

// Balance: [savings, current, demat]
static int indianBank[] = {100, 0, 0};
static int axisBank[] = {100, 0, 0};
static int hdfcBank[] = {100, 0, 0};
static int sbiBank[] = {100, 0, 0};

int getBank()
{
start:
    int bank;
    printf("Bank List:\n");
    printf("1. Indian Bank\n");
    printf("2. Axis Bank\n");
    printf("3. HDFC Bank\n");
    printf("4. SBI Bank\n");
    printf("5. Exit\n");
    printf("Enter you choice: ");
    scanf("%d", &bank);
    system("clear");
    if (bank < 0 || bank > 5)
    {
        printf("Invalid Choice\n");
        goto start;
    }
    return bank;
}

int getAccount()
{
start:
    int account;
    printf("Accounts:\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("3. Trading Account\n");
    printf("Enter your choice: ");
    scanf("%d", &account);
    system("clear");
    if (account < 0 || account > 3)
    {
        printf("Invalid Choice\n");
        goto start;
    }
    return account;
}

int getAccountBalance(int bank, int account)
{
    switch (bank)
    {
    case 1:
        return indianBank[account - 1];
    case 2:
        return axisBank[account - 1];
    case 3:
        return hdfcBank[account - 1];
    case 4:
        return sbiBank[account - 1];
    default:
        return 0;
    }
}

void printAccountDetails(int account, int balance, float roi)
{
    switch (account)
    {
    case 1:
        printf("Savings Account\n");
        break;
    case 2:
        printf("Current Account\n");
        break;
    case 3:
        printf("Trading Account\n");
        break;
    default:
        return;
    }
    printf("Balance: %d\n", balance);
    printf("Rate of Interest %f\n", roi);
}

int getAccountOperation(int account)
{
start:
    int operation;
    printf("Operations:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);
    system("clear");
    if (operation < 0 || operation > 2)
    {
        printf("Invalid Choice\n");
        goto start;
    }
    return operation;
}

int getAmount(int operation)
{
    switch (operation)
    {
    case 1:
        printf("Enter the amount to deposit: ");
        break;
    case 2:
        printf("Enter the amount to withdraw: ");
        break;
    default:
        return 0;
    }
    int amount;
    scanf("%d", &amount);
    system("clear");
    return amount;
}

void performOperation(int bank, int account, int operation, int amount)
{
    if (operation == 2)
        amount *= -1;

    switch (bank)
    {
    case 1:
        indianBank[account - 1] += amount;
        break;
    case 2:
        axisBank[account - 1] += amount;
        break;
    case 3:
        hdfcBank[account - 1] += amount;
        break;
    case 4:
        sbiBank[account - 1] += amount;
        break;
    default:
        return;
    }
}

int main()
{
    int chosenBank;

    do
    {
        chosenBank = getBank();
        if (chosenBank == 5)
            break;
        int chosenAccount = getAccount();
        int balance = getAccountBalance(chosenBank, chosenAccount);
        printAccountDetails(chosenAccount, balance, 3);
        int chosenOperation = getAccountOperation(chosenAccount);
        int amount = getAmount(chosenOperation);
        performOperation(chosenBank, chosenAccount, chosenOperation, amount);
    } while (chosenBank > 0 && chosenBank < 5);

    return 0;
}