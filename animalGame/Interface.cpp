#import "AnimalStruct.cpp"
#include <iostream>


// начальная настройка
static animal *setupGame() {
    animal *q1 = new animal();
    animal *q2 = new animal("Ваше животное птица?");
    q2->yes = new animal("Ваше животное попугай?");
    q2->yes->yes = new animal("", "попугай");
    
    q1->no = q2;
    
    return q1;
}

static bool interface(animal *game) {
    
     while (game != NULL && game->question != "") {
        cout<<"y - Да, n - Нет"<<endl;
        cout<<game->question<<endl;
        char a;
        cin>>a; // да/нет

        if (a == 'y' && game->yes != NULL)
            game = game->yes;
        else if (a == 'n' && game->no != NULL)
            game = game->no;
        else
            break;
    }
    
    if (game->answer != "")
        cout<<"Ваше животное: "<<game->answer<<endl; //ответ
    else {
        cout<<"Похоже мы не знаем что это за животное, пожалуйста введите его: ";
        animal *answer = new animal("");
        string q;
        string a;
        cin>>a;
        cin.ignore(32767, '\n');
        answer->answer = a;
        animal *question1 = new animal("Ваше животное " + a + "?","", nullptr, answer);
        cout<<"Введите его характеристику: ";
        getline(std::cin, q);
        q = "Ваше животное обладает " + q + "?";
        animal *question2 = new animal(q, "", nullptr, question1);
        if (game->yes == NULL)
            game->yes = question2;
        else
            game->no = question2;
    }
    
    cout<<"Сыграем ещё?\n";
    char b;
    cin>>b;
    
    if (b == 'y')
        return true;
    else
        return false;
}

