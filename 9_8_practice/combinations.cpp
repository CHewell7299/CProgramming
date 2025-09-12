/*
    Prints combination of characters
*/

#include <iostream>

void printCombinations(int n);
void printCombinations(std::string& s, int n, int i);

int main(){
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    printCombinations(n);

    return 0;
}

void printCombinations(int n){
    std::string s(n, 'a');

    printCombinations(s, n, 0);
}

void printCombinations(std::string& s, int n, int i){
    //base case
    if (i >= n) {
        std::cout << s << std::endl;
        return;
    }

    while (s[i] <= 'z') {
        // check if s[i] already appears earlier in the string
        bool used = false;
        for (int j = 0; j < i; j++) {
            if (s[j] == s[i]) {
                used = true;
                break;
            }
        }

        if (!used) {
            printCombinations(s, n, i+1);
        }

        s[i]++;
    }

    s[i] = 'a';
}