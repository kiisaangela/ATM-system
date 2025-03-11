#include <stdio.h>
#include <string.h>

// Function prototypes
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);
void transactionHistory();
int authenticate();

#define MAX_TRANSACTIONS 5
char transactions[MAX_TRANSACTIONS][50];
int transactionCount = 0;