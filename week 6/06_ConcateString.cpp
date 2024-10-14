#include<iostream>
using namespace std;
void concatenateStrings(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[300]="Sameer";
    char str2[300]="Khan";
    cout<<"Before Concate:"<<str1<<" "<<str2<<endl;
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
