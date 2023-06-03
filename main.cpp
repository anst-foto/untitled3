#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    /*cout << "argc = " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        string argument(argv[i]);
        cout << "argv[" + to_string(i) + "] = " << argument << endl;
    }*/

    const string KEY_HELP_1 = "-h";
    const string KEY_HELP_2 = "-?";
    const string KEY_HELP_3 = "--help";

    const string VALUE_ABOUT = "about";
    const string VALUE_TEST = "test";

    if (argc > 1) {
        string key = argv[1];
        if (key == KEY_HELP_1 || key == KEY_HELP_2 || key == KEY_HELP_3) {
            string value = argv[2];
            if (value == VALUE_ABOUT) {
                cout << "About" << endl;
            } else if (value == VALUE_TEST) {
                cout << "Test" << endl;
            }
        } else {
            cout << "Bad prompt" << endl;
        }
    }


    return 0;
}
