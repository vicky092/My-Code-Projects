#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello user! This is a mini chatbot, can I know your name please" << endl;
    string user;
    getline(cin, user);
    cin >> user;
    cout << "Nice to meet you, " << user << "!" << endl;
    cout << "Just be free to ask me anything about food!" << endl;
    string usermsg;
     
    while(true) {
        getline(cin, usermsg);
        if(usermsg == "exit"){
            cout << "See you next time, " << user << "!" << endl;
            break;
        } else if(usermsg == "how are you") {
            cout << "I am a chatbot, I don't have feelings or emotions" << endl;
            cout << "How else can I help you, " << user << endl;
        } else {
            cout << "You said: " << usermsg << endl;
        }
    }
    return 0;
}