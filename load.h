#pragma once
#include <iostream>
#include <future>

#include <Windows.h>

void load(int sleep) {
    float progress = 0.0;
    std::cout << "\n\n\t\t\t\t\t\t Подождите идет загрузка \n\n";
    while (progress < 1.0) {

        int barWidth = 70;
        int pos = barWidth * progress;

        Sleep(sleep);

        std::cout << "\t\t\t[";
        for (int i = 0; i < barWidth; i++) {
            if (i <= pos) std::cout << "|";
            
            else std::cout << " ";
        }
        std::cout << "]" << int(progress * 101.0) << " %\r";
        std::cout.flush();

        progress += 0.01;
    }
    std::cout << std::endl;
    Sleep(100);
    system("cls");
}