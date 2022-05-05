#include <iostream>
#include <array>
#include <numeric>
#include <bits/stdc++.h>

std::array<double, 12> rainfallTotal;


int main(){
    for(int i =0; i<12; i++){
        std::cout << "Enter rainfall for month " << i+1 << " : ";
        std::cin >> rainfallTotal[i];
    }    
    double sum = std::accumulate(rainfallTotal.begin(), rainfallTotal.end(), 0);
    double average = sum / 12;

    std::sort(rainfallTotal.begin(), rainfallTotal.end());

    double lowest = rainfallTotal[0];
    double highest = rainfallTotal[11];

    std::cout << "The total rainfall is: " << sum << std::endl;
    std::cout << "The average monthly rainfall is: " << average  << std::endl;
    std::cout << "The lowest rainfall is: " << lowest << std::endl;
    std::cout << "The highest rainfall is: " << highest  << std::endl;


}