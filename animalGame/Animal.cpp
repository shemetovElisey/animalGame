#include <string>

using namespace std;

class Animal {
    string question;
    string answer;
    Animal *no;
    Animal *yes;
    
public:
    Animal(string _question = "Ваше животное млекопитающее?",
           string _answer = "",
           Animal *_no = nullptr,
           Animal *_yes = nullptr)
        : question(_question), answer(_answer), no(_no), yes(_yes) {};
    
    string getQuestion() {
        return question;
    }
    
    string getAnswer() {
        return answer;
    }
    
    Animal *getYes() {
        return yes;
    }
    
    Animal *getNo() {
        return no;
    }
    
    void setYes(Animal *_yes) {
        yes = _yes;
    }
    
    void setNo(Animal *_no) {
        no = _no;
    }
};
