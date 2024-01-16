
void heading()
{
    clearScreen();
    string massage = " Welcome To Typing Speed Tester ";
    cout << "\n\n\t\t\t\t\t\t";
    cout << textColorGreen;
    printf("\x1B[1m");
    printf("\x1B[4m");
    for (size_t i = 0; i < massage.length(); i++)
    {
        cout << massage[i];
        fflush(stdout);
        delay(50000);
    }
    printf("\x1B[0m");
    printf("\x1B[0m");
    cout << textColorReset;
    cout << endl
         << endl
         << endl
         << endl;

    string nameMessage = "Enter your name to continue : ";
    for (size_t i = 0; i < nameMessage.length(); i++)
    {
        cout << nameMessage[i];
        fflush(stdout);
        delay(50000);
    }

    cin >> uname;
    cout << endl;
    cout << "Hi " << uname << ","
         << " Welcome to Typing Speed Tester" << endl
         << endl;
}






