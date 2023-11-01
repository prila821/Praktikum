#include <iostream>
#include <string>

int main() {
    std::string password_input;
    std::cout << "Masukkan password: ";
    std::cin >> password_input;

    int length = password_input.length();
    bool has_lowercase = false;
    bool has_uppercase = false;
    bool has_digit = false;

    for (char c : password_input) {
        if (c >= 'a' && c <= 'z') {
            has_lowercase = true;
        } else if (c >= 'A' && c <= 'Z') {
            has_uppercase = true;
        } else if (c >= '0' && c <= '9') {
            has_digit = true;
        }
    }

    bool is_valid = length == 8 && has_lowercase && has_uppercase && has_digit;

    if (is_valid) {
        std::string converted_password = "";
        for (char c : password_input) {
            if (c >= 'a' && c <= 'z') {
                char converted_char = c + 2;
                if (converted_char > 'z') {
                    converted_char -= 26;
                }
                converted_password += converted_char;
            } else if (c >= '0' && c <= '9') {
                int converted_digit = (c - '0') * 2;
                converted_password += std::to_string(converted_digit);
            }
        }

        std::cout << "Password yang diinput: " << password_input << std::endl;
        std::cout << "Password yang tersimpan: " << converted_password << std::endl;
    } else {
        std::cout << "Password tidak valid!" << std::endl;
    }

    return 0;
}