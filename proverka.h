#pragma once


#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>

#include <string>


void proverka()
{

    std::ifstream vopros("vopros.txt");
    std::string str;
    std::vector<std::string> bank_voprosov;
    while (!vopros.eof())
    {
        std::getline(vopros, str);

        bank_voprosov.push_back(str);

    }
    vopros.close();


    std::ifstream otvet("otvet.txt");
    std::string str_o;
    std::vector<std::string> bank_otvetov;

    while (!otvet.eof())
    {
        getline(otvet, str_o);

        bank_otvetov.push_back(str_o);

    }
    otvet.close();
    for (int i = 0; i < bank_otvetov.size(); i++)//проверка
    {
        std::cout << bank_voprosov[i] << " " << bank_otvetov[i] << std::endl;
    }

    system("pause");
    system("cls");
    load(5);
}