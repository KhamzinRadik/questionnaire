#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <string>
void print(std::string str)
{
    std::cout << str<<" ";
}
void test()
{
    int vsego_voprosov=0;
    int pravelinie_otveti=0;
    std::ifstream vopros("vopros.txt");
    std::string str;
    std::vector<std::string> bank_voprosov;
    while (!vopros.eof())
    {
        std::getline(vopros, str);
        bank_voprosov.push_back(str);
    }
   
    vopros.close();
    std::cout <<" Всего вопросов :"<< bank_voprosov.size()-1 << std::endl;
    print("Готовы приступить к тестированию?");
             system("pause");
            system("cls");
    std::ifstream otvet("otvet.txt");
    std::string str_o;
    std::vector<std::string> bank_otvetov;

    while (!otvet.eof())
    {
        getline(otvet, str_o);\
        bank_otvetov.push_back(str_o);\
    }
    otvet.close();
    
    print("Вопрос :");
    bool* voprosB = new bool[bank_voprosov.size() - 1];
     for (int i = 0; i < bank_voprosov.size(); i++)
    {
        voprosB[i] = true;
    }
    
   
    srand((unsigned int)time(NULL));
    int go=0;
    while(go!= bank_voprosov.size()-1)
    {
        go = 0;
        
        std::string prOtv;
        int a = rand() % bank_voprosov.size()-1;
        if (voprosB[a] == true)
        {

            print(bank_voprosov[a]);
            vsego_voprosov += 1;
            voprosB[a] = false;
            std::cin >> prOtv;
            if (prOtv == bank_otvetov[a])
            {
                pravelinie_otveti += 1;
                print(" верно !");
                
            }
            else
            {
                print("не верно");
            }
          //  print("Верный ответ "+ bank_otvetov[a]);
        }
        for (int i = 0; i < bank_voprosov.size()-1; i++)
        {
            if (voprosB[i] == false) go += 1;
            
        }
       
    }
    system("cls");
    std::cout <<"\n\n\n\t\t\tКоличество Вопросов :"<< vsego_voprosov <<std::endl;
    
    std::cout << "\n\n\n\t\t\tКоличество НЕ верных ответов :"<<vsego_voprosov - pravelinie_otveti << std::endl;
    system("\t\t\t\t\tpause");
    system("cls");

}