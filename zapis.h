#pragma once

#include<iostream>
#include <fstream>
#include <Windows.h>


#include <string>

void otvet()
{
    std::ofstream otvet;
    otvet.open("otvet.txt", std::ios::app);
    if (otvet.is_open())
    {
        std::string str;
        std::cout << "¬ведите ответ :";
        std::cin >> str;
        otvet << str << std::endl;
    }
    
}

void add()
{


    std::ofstream vopros;
    vopros.open("vopros.txt", std::ios::app);
    if (vopros.is_open())
    {
        std::string str; 
do
        {
            std::cout << "¬ведите вопрос :";
            std::cin.ignore();
            std::getline(std::cin,str);

            if (str != "stop")
            {
                vopros << str << std::endl;
                otvet();
            }
           
        } while (str != "stop");

    }
    vopros.close();
}
