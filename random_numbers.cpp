#include <iostream>
#include <random>

int main(){
    int sum=0, mean=0;
    // Generate seed
    std::random_device rd;

    //Initialize random num engine with seed
    std::mt19937 eng(rd());

    //Define distribution
    std::uniform_int_distribution<int> dist(1,100);

    for(int i=0; i<50; i++){
        int x= dist(eng);
        sum += x;
        std::cout << x << std::endl;
    }
    mean = sum/50;
    std::cout<<"The mean is"<< mean << std::endl;

    return 0;

}