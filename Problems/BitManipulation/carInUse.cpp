#include <iostream>
using namespace std;

char cars = 0;

bool is_in_use(int car_num){
    return cars & 1<<car_num;
}

void set_in_use(int car_num){
    cars = cars ^ 1<<car_num;
}


int main(int argc, const char *argv[])
{
    while (true) {
        cout << "Choose option." << endl;
        std::cout << "1. Toggle a parking spot." << std::endl;
        std::cout << "2. Check availability." << std::endl;
        int option;
        cin >> option;
        switch (option) {
            case 1:
                cout << "Which parking spot? ";
                cin >> option;
                if (option > 0 && option < 8) set_in_use(option);
                break;
            case 2:
                for (int i = 0; i < 8; i++) {
                    (is_in_use(i+1))
                    ? cout << "|x"
                    : cout << "| ";
                }
                cout << endl;
                break;

            default:
                cout << "Wrong option, choose again." << endl;
        }
    }
    return 0;
}
