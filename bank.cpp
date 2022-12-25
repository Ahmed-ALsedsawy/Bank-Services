#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "\t****** Welcome in our servicses ******\t\n\n\n";

    int pin, choosen = 0;
    float balance = 2000.0, withdraw = 0.0, deposite = 0.0;
    bool correct = true;

  //الكود هيتنفذ علي الاقل مره ومن ثم يتحقق من القيمه اللي المستخدم هيدخلها اذا
  //بتكون موافقه للشرط المطلوب ولا يعيد الامر مره اخري الي ان يكتبه بطريقة صحيحة
    do {
        cout << "Enter the code of your PIN :\n\" **Note that the PIN code must be "
                "at least 4 numbers. \": ";
        cin >> pin;
    } while (pin < 1000 || pin > 1000000000);

    do {
        cout << "\n\t ***********\t\n";
        cout << "\nServices :\n";
        cout << "\n1- Check Account Balance :\n";
        cout << "2- Withdraw Cash :\n";
        cout << "3- Deposite Cash :\n";
        cout << "4- Quit :\n\n";

        cout << "Choose your service please : ";
        cin >> choosen;

        switch (choosen) {
        case 1:
            cout << "\nYou have $" << balance << " currently.\n\n";
            break;
        case 2:
            cout << "Enter the amount to Withdraw: ";
            cin >> withdraw;
            if (withdraw > balance) {
                cout << "\nPlease make sure you put a valid value\n";
            } else {
                //هتظهرلك الناتج تمام ولكن لو جيت بعد كدا تعمل عملية حسابيه علي
                //الميزانية أو الحساب نفسه هتكون بقيمته الاصلية و الافتراضية مثل ما  نت
                //معرفة فوق cout العملية دي عشان القيمه تنقص فعلياً من الحساب نفسه، بخلاف
                // لو عملتها في ال العملية الحسابيه أولا deposite وكذالك الفكره في كود
                // ال
                balance -= withdraw;
                cout << "\nSo your current balance is $" << balance << "\n";
            break;
            }
        case 3:
            cout << "\nEnter the amount to be Deposite: ";
            cin >> deposite;
            balance += deposite;
            cout << "\nSo your current balance is $" << balance << "\n";
            break;
        case 4:
            cout << "\n\n\t  Thanks for using our servicses, We hope you safety  "
                    "\t\n\n";
            correct = false;
            break;
        default:
            cout << "\nError, please make sure you put the number of the servise you "
                    "want and try again\n";
        }
    } while (correct);

return 0;
}