#include <iostream>
#include <string>
using namespace std;

int main() {

    string userInput;
    cout << "Hello! I'm your chatbot, here to assist you with the Group D C++ Assignment.\n";
    cout << "Group Members:\n";
    cout << "1. Babayemi Temitayo\n";
    cout << "2. Babatunde Micheal\n";
    cout << "3. Dairo Abisola\n";
    cout << "4. Daniel Adeoye\n";
    cout << "5. Enoch Victoria\n";
    cout << "6. Ewulana Idris\n";
    cout << "7. Gbadamosi Oluwasegun\n";
    cout << "Type 'exit' to end the chat.\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        // Convert input to lowercase (optional)
        for (char &c : userInput) c = tolower(c);

        if (userInput == "exit") {
            cout << "Chatbot: Goodbye!" << endl;
            break;
        } else if (userInput == "hello") {
            cout << "Chatbot: Hi there! How can I help you?" << endl;
        } else if (userInput == "what can you do?") {
            cout << "Chatbot: I can chat with you and help you with programming questions!" << endl;
        } else if (userInput == "who are the Lecturer in Charge?") {
            cout << "Chatbot: Mr. Akintayo" << endl;
        } else if (userInput == "what is the assignment about?") {
            cout << "Chatbot: The assignment is about creating a simple chatbot in C++." << endl;
        } else if (userInput == "when is the assignment due?") {
            cout << "Chatbot: The assignment is on 28th of Feb, 2025." << endl;
        } else if (userInput == "what is the course name?") {
            cout << "Chatbot: The course name is Introduction to C++ Programming." << endl;
        } else if (userInput == "who is the course instructor?") {
            cout << "Chatbot: The course instructor is Mr. Akintyo" << endl;
        } else if (userInput == "what is the course code?") {
            cout << "Chatbot: The course code is SWD 313." << endl;
        } else if (userInput == "how can I contact the instructor?") {
            cout << "Chatbot: You can contact the instructor via email at akintayo.oluwafemi@ogitech.edu.ng" << endl;
        } else if (userInput == "whats department is the course under?") {
            cout << "Chatbot: The course is under the Software & WebDevelopment Department." << endl;
        } else if (userInput == "how are you?") {
            cout << "Chatbot: I'm doing great!" << endl;
        } else {
            cout << "Chatbot: I'm not sure how to respond to that." << endl;
        }
    }

    return 0;
}