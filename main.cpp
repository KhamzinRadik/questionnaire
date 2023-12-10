
#include"load.h"
#include<vector>
#include "zapis.h"
#include "proverka.h"
#include "test.h"
#include <winddi.h>


using namespace std;



int main()

{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    setlocale(LC_ALL, "Rus"); 
    std::string com;
    system("color 1f");
    
    load(10);
do
    {
  
        print("\n\n\n\t\t<<добавить(вопрос/ответ)/проверка/тестирование>> Введите команду :");
        std::cin >> com;
        system("cls");
       
        if (com == "добавить")
        {
            load(5);
            add();
        }
        if (com == "проверка")
        {
            load(5);
            proverka();
            std::cout << std::endl;
        }
        if (com == "тестирование")
        {
            load(5);
            test();
            std::cout << std::endl;
        }
        else
        {
            
            std::cout << "\n\n\n\t\t Такой команды нет !";
            Sleep(1500);
            system("cls");
        }

    } while (true);

   
   
}