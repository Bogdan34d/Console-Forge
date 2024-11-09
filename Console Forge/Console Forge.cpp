#include <iostream>
#include <windows.h>

class Google {
    public:
        std::string seartch;

        void Seartch() {
            std::cout << "Seartch on Google-> ";
            std::cin >> seartch;

            std::wstring url = L"https://www.google.com/search?q=";
            url += std::wstring(seartch.begin(), seartch.end());

            ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
        }
};

int main() {
    SetConsoleTitle(L"Console Forge");
    std::string command;

    std::cout << "Console Forge 'web controller'\n";
    std::cout << "-> Write 'info' for more commands \n";
    std::cout << "\n";

    do {
        
        std::cout << "web/command/-> ";
        std::cin >> command;
        if (command == "info") {
            std::cout << std::endl;
            std::cout << "yt -> YouTube\n";
            std::cout << "ai -> ChatGpt\n";
            std::cout << "mail -> Google Gmail inbox \n";
            std::cout << "ws -> Whatsapp \n";
            std::cout << "gh -> Github \n";
            std::cout << "sr -> Seartch on Google \n";
        }

        else if (command == "yt") { ShellExecute(0, L"open", L"https://www.youtube.com", NULL, NULL, SW_SHOW); }

        else if (command == "ai") { ShellExecute(0, L"open", L"https://www.chatgpt.com", NULL, NULL, SW_SHOW); }

        else if (command == "mail") { ShellExecute(0, L"open", L"https://mail.google.com/mail/u/0/#inbox", NULL, NULL, SW_SHOW); }

        else if (command == "ws") { ShellExecute(0, L"open", L"https://web.whatsapp.com/", NULL, NULL, SW_SHOW); }

        else if (command == "gh") { ShellExecute(0, L"open", L"https://github.com/", NULL, NULL, SW_SHOW); }

        else if (command == "sr") {
            Google srch;
            srch.Seartch();
        }

        std::cout << std::endl;
    } while (command != "exit");

    system("pause");
    return 0;

}