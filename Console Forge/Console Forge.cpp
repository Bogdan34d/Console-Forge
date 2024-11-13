#include <iostream>
#include <windows.h>
#include <string>
#include "GoogleSeartch.h"
#include "yt.h";


int main() {
    SetConsoleTitle(L"Console Forge");
    std::string command;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    std::cout << "\n";

    do {
        SetConsoleTextAttribute(h, 3);
        std::cout << "Console Forge ";

        SetConsoleTextAttribute(h, 6);
        std::cout << "- 1.1v \n";

        SetConsoleTextAttribute(h, 7);
        std::cout << "-> ";

        std::getline(std::cin, command);

        if (command == "yt") {
            ShellExecute(0, L"open", L"https://www.youtube.com", NULL, NULL, SW_SHOW);
        }

        else if (command == "ai") {
            ShellExecute(0, L"open", L"https://www.chatgpt.com", NULL, NULL, SW_SHOW);
        }

        else if (command == "mail") {
            ShellExecute(0, L"open", L"https://mail.google.com/mail/u/0/#inbox", NULL, NULL, SW_SHOW);
        }

        else if (command == "ws") {
            ShellExecute(0, L"open", L"https://web.whatsapp.com/", NULL, NULL, SW_SHOW);
        }

        else if (command == "gh") {
            ShellExecute(0, L"open", L"https://github.com/", NULL, NULL, SW_SHOW);
        }
        //goggle
        else if (command == "gos") {
            Google srch;
            srch.Seartch();
        }
        else if (command == "gop") {
            Google srchp;
            srchp.pozeSearch();
        }
        //yt
        else if (command == "ytm") {
            yt yt1;
            yt1.searchYt();
        }
        else {
            std::cout << "'" << command << "'";
            SetConsoleTextAttribute(h, 8);
            std::cout << " is not a Console Forge command";
            SetConsoleTextAttribute(h, 7);
            std::cout << std::endl;
        }

        std::cout << std::endl;  
    } while (command != "exit");

    system("pause");
    return 0;
}