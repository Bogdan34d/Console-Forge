#include <string>

class Google {
public:
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    void Seartch() {
        std::string search;
        std::string word = "";

        SetConsoleTextAttribute(h, 6);
        std::cout << "-> ";

        SetConsoleTextAttribute(h, 8);
        std::getline(std::cin, search);

        for (int i = 0; i < search.length(); i++) {
            if (search[i] == ' ') {
                word += "+";
            }
            else {
                word += search[i];
            }
        }
    
        std::wstring url = L"https://www.google.com/search?q=";
        url += std::wstring(word.begin(), word.end());

        ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
    }

    void pozeSearch() {
        std::string search;
        std::string word = "";
        
        SetConsoleTextAttribute(h, 6);
        std::cout << "-> ";

        SetConsoleTextAttribute(h, 8);
        std::getline(std::cin, search);
        
        for (int i = 0; i < search.length(); i++) {
            if (search[i] == ' ') {
                word += "+";
            }
            else {
                word += search[i];
            }
        }

        std::wstring url = L"https://www.google.com/search?q=";
        url += std::wstring(word.begin(), word.end());
        url += L"&tbm=isch";

        ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
    }
};
