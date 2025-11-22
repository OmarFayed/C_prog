#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    vector<string> messages = {"This", "is", "a", "test", "message."};
    for (const auto& msg : messages) {
        cout << msg << " ";
    }
    cout << endl;
}
