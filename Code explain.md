Function SL():

void SL() {
    int n;
    cin >> n;
    string input;
    cin >> input;
    deque<char> s(input.begin(), input.end());
    while (!s.empty() && s.front() == 'W') {
        s.pop_front();
    }
    while (!s.empty() && s.back() == 'W') {
        s.pop_back();
    }
    cout << s.size() << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        SL();
    }
    return 0;
}
SL() function is defined to solve each test case.
It first reads an integer n representing the length of the string.
Then, it reads the input string using cin.
It creates a deque s and initializes it with the characters from the input string.
Two while loops remove the leading and trailing 'W's from the deque.
Finally, it prints the size of the deque.
Main function (main()):



main() function reads the number of test cases (t) from input.
It runs a loop t times, each time calling the SL() function to handle one test case.
After processing all test cases, it returns 0 to indicate successful execution.
This code essentially replicates the functionality of the provided Python code in C++, using similar constructs such as deque for handling sequences and cin/cout for input/output operations.





