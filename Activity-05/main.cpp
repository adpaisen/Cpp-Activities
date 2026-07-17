#include <iostream>
#include <vector>

using namespace std;

struct Question {
    string question;
    string options[4];
    char answer;
};

int main() {
    vector<Question> quiz = {
        {
            "What is the correct way to print output in C++?",
            {"A. print()", "B. cout", "C. echo", "D. display()"},
            'B'
        },
        {
            "Which symbol is used to end a statement in C++?",
            {"A. :", "B. .", "C. ;", "D. #"},
            'C'
        },
        {
            "Which data type is used to store whole numbers?",
            {"A. float", "B. string", "C. int", "D. char"},
            'C'
        },
        {
            "Which function is the starting point of a C++ program?",
            {"A. start()", "B. main()", "C. run()", "D. begin()"},
            'B'
        },
        {
            "Which keyword is used to create a constant variable?",
            {"A. fixed", "B. const", "C. static", "D. final"},
            'B'
        }
    };

    int score = 0;
    char answer;

    cout << "======================" << endl;
    cout << "     C++ Quiz Game     " << endl;
    cout << "======================" << endl;

    for (int i = 0; i < quiz.size(); i++) {
        cout << "\nQuestion " << i + 1 << ": " << quiz[i].question << endl;

        for (string option : quiz[i].options) {
            cout << option << endl;
        }

        cout << "Your answer: ";
        cin >> answer;

        answer = toupper(answer);

        if (answer == quiz[i].answer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong!" << endl;
        }
    }

    double percentage = (score * 100.0) / quiz.size();

    cout << "\n======================" << endl;
    cout << "Quiz Finished!" << endl;
    cout << "Score: " << score << "/" << quiz.size() << endl;
    cout << "Result: " << percentage << "%" << endl;

    return 0;
}
