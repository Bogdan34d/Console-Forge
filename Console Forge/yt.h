#include <iostream>
#include <windows.h>
#include <string>

class yt
{
  public:
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    void searchYt() {
        std::string ytsearch;

        SetConsoleTextAttribute(h, 6);
        std::cout << "-> ";

        SetConsoleTextAttribute(h, 8);
        std::getline(std::cin, ytsearch);

        std::wstring url = L"https://www.youtube.com/results?search_query=";
        url += std::wstring(ytsearch.begin(), ytsearch.end());

        ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
    }
};

