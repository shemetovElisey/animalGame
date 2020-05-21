#include <string>

using namespace std;

struct animal {
    string question;
    string answer;
    animal *no;
    animal *yes;
   
    animal(string _question = "Ваше животное млекопитающее?",
           string _answer = "",
           animal *_no = nullptr,
           animal *_yes = nullptr)
        : question(_question), answer(_answer), no(_no), yes(_yes) {};
};
