class Google {
public:
    std::string search;

    void Seartch() {
        std::cout << std::endl;
        std::cout << "Search on Google-> ";
        std::cin >> search;

        std::wstring url = L"https://www.google.com/search?q=";
        url += std::wstring(search.begin(), search.end());

        ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
    }
};

class YouTube {
   public:
       std::string chaneel;
       std::string ytCommand;
       std::string ytsearch;

       void searchChaneel() {
           std::cout << std::endl;
           std::cout << "     Search/YouTube/chaneel-> https://www.youtube.com/@";
           std::cin >> chaneel;

           std::wstring url = L"https://www.youtube.com/@";
           url += std::wstring(chaneel.begin(), chaneel.end());

           ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
       }

       void searchYt() {
           std::cout << std::endl;
           std::cout << "     yt/search-> ";
           std::cin >> ytsearch;

           std::wstring url = L"https://www.youtube.com/results?search_query=";
           url += std::wstring(ytsearch.begin(), ytsearch.end());

           ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
       }

       int main() {
           std::cout << std::endl;
           std::cout << "   yt / command-> ";
           std::cin >> ytCommand;

           if (ytCommand == "ch") {
               searchChaneel();
           }

           if (ytCommand == "sh") {
               searchYt();
           }
           
           return 0;
       }
};