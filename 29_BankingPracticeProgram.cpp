#include <iostream>
#include <iomanip>

int realPin = 4567;
double balance = 0;

void depositFunds();
void withdrawFunds();

int main() {
    /*
        29: Banking practice program

        Practice program which will be able to:
        1. View your current balance
        2. Deposit funds
        3. Withdraw funds
    */

    int guessPin;
    int option;

    std::cout << "Welcome to Blue Arrow Bank.\n\n";
    std::cout << "Please enter your pin or type 0000 to exit: ";

    while (true) {        
        std::cin >> guessPin;
        if (guessPin == 0000) {
            std::cout << "\nThank you for banking with us. Goodbye.\n\n";
            return 0;
        } else if (guessPin == realPin) {
            std::cout << "\nPIN is correct. Proceeding to main menu.\n\n";
            break;
        } else {
            std::cout << "\nInvalid PIN. Please try again. Enter your pin or type 0000 to exit: ";
        }
    }

    while (true) {
        std::cout << "Please select one of the following options:\n\n";
        std::cout << "1) View your current balance.\n";
        std::cout << "2) Deposit funds into your account.\n";
        std::cout << "3) Withdraw funds from your account.\n";
        std::cout << "4) Exit.\n\n";
        // If the user inputs 4, the program will terminate. In this case, 4 is the "sentinel value" of the program.
        //
        // A sentinel value is a value used by a program, function, loop etc. to terminate itself.

        std::cin >> option;

        // std::cin.clear(); // Supposed to prevent invalid input from cluttering screen
        // fflush(stdin);    // But this doesn't work for me or Bro Code for some reason.
        // Not the end of the world as only numbers could be entered on a PIN pad anyways.

        switch (option) {
            case 1:
                std::cout << "Your current balance is: £" << std::setprecision(2) << std::fixed << balance << ".\n\n";
                break;
            case 2:
                depositFunds();
                break;
            case 3:
                withdrawFunds();
                break;
            case 4:
                std::cout << "Thank you for banking with us. Goodbye.\n\n";
                return 0;
            default:
                std::cout << "Invalid selection. Please try again.\n\n";
                continue;
        }
    }

    return 0;
}

void depositFunds() {
    double limit = 2000.00;
    double amountToDeposit;
    std::cout << "You may withdraw any amount up to £" << limit << ".\n";
    std::cout << "To go back to the main menu, you may select £0.\n";
    std::cout << "Please enter how much you would like to deposit: £";
    std::cin >> amountToDeposit;

    if (amountToDeposit == 0) {
        std::cout << "\nReturning to main menu...\n\n";
    } else if (amountToDeposit > limit || amountToDeposit < 0) {
        std::cout << "\nError. You may only deposit an amount between £0.01 and £" << limit << ".\n";
        depositFunds();
    } else {
        balance = balance + amountToDeposit;
        std::cout << "\nYou have deposited £" << amountToDeposit << ". Your current balance is £" << std::setprecision(2) << std::fixed << balance << ".\n\n";
    }
}

void withdrawFunds() {
    double amountToWithdraw;
    std::cout << "You may withdraw any amount up to and including your current balance, which is £" << std::setprecision(2) << std::fixed << balance << ".\n";
    std::cout << "To go back to the main menu, you may select £0.\n";
    std::cout << "Please enter how much you would like to withdraw: £";
    std::cin >> amountToWithdraw;

    if (amountToWithdraw == 0) {
        std::cout << "\nReturning to main menu...\n\n";
    } else if (amountToWithdraw > balance || amountToWithdraw < 0) {
        std::cout << "\nError. You may only withdraw an amount between £0.01 and your current bank balance.\n\n";
        withdrawFunds();
    } else {
        balance = balance - amountToWithdraw;
        std::cout << "\nYou have withdrawn £" << amountToWithdraw << ". Your current balance is £" << std::setprecision(2) << std::fixed << balance << ".\n\n";
    }
}