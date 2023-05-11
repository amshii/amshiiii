#include <iostream>

int count_ones_in_digits(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 1) {
            count += 1;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int total_ones = 0;

    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            for (int second = 0; second < 60; second++) {
                total_ones += count_ones_in_digits(hour) + count_ones_in_digits(minute) + count_ones_in_digits(second);
            }
        }
    }

    std::cout << "24 tsagt,min,sec 1 heden udaa orj baiga: " << total_ones << std::endl;

    return 0;
}

