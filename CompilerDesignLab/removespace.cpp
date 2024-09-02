#include <bits/stdc++.h>
using namespace std;

int sign_check(char pre_value)
{
    return (pre_value == '+' || pre_value == '-' || pre_value == '*' ||
            pre_value == '/' || pre_value == '%' || pre_value == '=');
}

int main()
{
    int s;
    char pre_value = ' ';
    string str;
    FILE *f2;
    int count = 0; // Counter for numbers

    freopen("1 INPUT.txt", "r", stdin); // Use "Input.txt" as your input file
    f2 = fopen("Outputs.txt", "w");     // Use "Output.txt" as your output file

    if (!f2)
    {
        printf("Failed to open the output file.\n");
        return 1;
    }

    printf("Collected numbers:\n");

    while (getline(cin, str))
    {
        int len = str.size();

        // Removing whitespaces and writing to output file
        for (int i = 0; i < len; i++)
        {
            if (!isspace(str[i]))
                putc(str[i], f2);
        }
        putc('\n', f2);

        // Collecting and printing numbers
        for (int i = 0; i < len; i++)
        {
            if (isdigit(str[i]))
            {
                s = str[i] - '0';
                while (i + 1 < len && isdigit(str[i + 1]))
                {
                    i++;
                    s = s * 10 + (str[i] - '0');
                }

                // Print the number after the entire sequence is processed
                if ((sign_check(pre_value) || pre_value == ' ') &&
                    (i + 1 >= len || sign_check(str[i + 1]) || str[i + 1] == ';'))
                {
                    cout << s << endl;
                    count++; // Increment the count for each valid number
                }
            }
            pre_value = str[i];
        }
    }

    printf("Total numbers collected: %d\n", count); // Print the total count

    fclose(f2);
    return 0;
}
