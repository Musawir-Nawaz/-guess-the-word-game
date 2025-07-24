#include <iostream>
using namespace std;
int main()
{
    char arr[] = "input", arr2[] = "microsoft", arr3[] = "computing", arr4[] = "enough", arr5[] = "software", guess, start = 'A';
    int win = 0, lose = 0;
    cout << "Welcome to HANGMAN GAME \nHigh Win streak is = 5 \nnote: you have 3 attempts only for each word \n********************************************" << endl;
    do
    {
        if (start == 'A' || start == 'a')
        {
            char hidden_words[5] = { '_','_','_', '_', '_' };
            int attempt = 3, count = 0;
            bool hint = false;
            for (int i = 0; arr[i] != '\0'; i++)
            {
                cout << "_ ";
            }
            cout << endl;
            while (attempt != 0)
            {
                cout << "\nenter letter" << endl;
                cin >> guess;
                if (guess == arr[0] || guess == arr[1] || guess == arr[2] || guess == arr[3] || guess == arr[4])
                {
                    cout << "Correct! :)" << endl;
                    for (int i = 0; i < 5; i++)
                    {
                        if (arr[i] == guess)
                        {
                            hidden_words[i] = arr[i];
                            hint = true;
                        }
                    }
                    if (hint == true)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << hidden_words[i] << " ";
                        }
                    }
                    count++;
                    if (count == 5)
                    {
                        win += 1;
                        cout << "\ncongratulation! You won :D" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "wrong! :(" << endl;
                    attempt--;
                    cout << "remaining attempts are " << attempt << endl;
                }
            }
            if (attempt == 0)
            {
                lose += 1;
                cout << "Alas! You lose the game! ;(" << endl;
            }
        }
        else if (start == 'B' || start == 'b')
        {
            char hidden_words[9] = { '_','_','_', '_', '_','_','_','_','_' };
            int attempt = 3, count = 0;
            bool hint = false;
            for (int i = 0; arr2[i] != '\0'; i++)
            {
                cout << "_ ";
            }
            cout << endl;
            while (attempt != 0)
            {
                cout << "\nenter letter" << endl;
                cin >> guess;
                if (guess == arr2[0] || guess == arr2[1] || guess == arr2[2] || guess == arr2[3] || guess == arr2[4] || guess == arr2[5] || guess == arr2[6] || guess == arr2[7] || guess == arr2[8])
                {
                    cout << "Correct! :)" << endl;
                    for (int i = 0; i < 9; i++)
                    {
                        if (arr2[i] == guess)
                        {
                            hidden_words[i] = arr2[i];
                            hint = true;
                        }
                    }
                    if (hint == true)
                    {
                        for (int i = 0; i < 9; i++)
                        {
                            cout << hidden_words[i] << " ";
                        }
                        count++;
                    }
                    if (count == 8)
                    {
                        win += 1;
                        cout << "\ncongratulation! You won :D" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "wrong! :(" << endl;
                    attempt--;
                    cout << "remaining attempts are " << attempt << endl;
                }
            }
            if (attempt == 0)
            {
                lose += 1;
                cout << "Alas! You lose the game! ;(" << endl;
            }
        }
        else if (start == 'C' || start == 'c')
        {

            char hidden_words[9] = { '_','_','_', '_', '_','_','_','_','_' };
            int attempt = 3, count = 0;
            bool hint = false;
            for (int i = 0; arr3[i] != '\0'; i++)
            {
                cout << "_ ";
            }
            cout << endl;
            while (attempt != 0)
            {
                cout << "\nenter letter" << endl;
                cin >> guess;
                if (guess == arr3[0] || guess == arr3[1] || guess == arr3[2] || guess == arr3[3] || guess == arr3[4] || guess == arr3[5] || guess == arr3[6] || guess == arr3[7] || guess == arr3[8])
                {
                    cout << "Correct! :)" << endl;
                    for (int i = 0; i < 9; i++)
                    {
                        if (arr3[i] == guess)
                        {
                            hidden_words[i] = arr3[i];
                            hint = true;
                        }
                    }
                    if (hint == true)
                    {
                        for (int i = 0; i < 9; i++)
                        {
                            cout << hidden_words[i] << " ";
                        }
                        count++;
                    }
                    if (count == 9)
                    {
                        win += 1;
                        cout << "\ncongratulation! You won :D" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "wrong! :(" << endl;
                    attempt--;
                    cout << "remaining attempts are " << attempt << endl;
                }
            }
            if (attempt == 0)
            {
                lose += 1;
                cout << "Alas! You lose the game! ;(" << endl;
            }
        }
        else if (start == 'D' || start == 'd')
        {
            char hidden_words[6] = { '_','_','_', '_', '_','_' };
            int attempt = 3, count = 0;
            bool hint = false;
            for (int i = 0; arr4[i] != '\0'; i++)
            {
                cout << "_ ";
            }
            cout << endl;
            while (attempt != 0)
            {
                cout << "\nenter letter" << endl;
                cin >> guess;
                if (guess == arr4[0] || guess == arr4[1] || guess == arr4[2] || guess == arr4[3] || guess == arr4[4] || guess == arr4[5])
                {
                    cout << "Correct! :)" << endl;
                    for (int i = 0; i < 6; i++)
                    {
                        if (arr4[i] == guess)
                        {
                            hidden_words[i] = arr4[i];
                            hint = true;
                        }
                    }
                    if (hint == true)
                    {
                        for (int i = 0; i < 6; i++)
                        {
                            cout << hidden_words[i] << " ";
                        }
                    }
                    count++;
                    if (count == 6)
                    {
                        win += 1;
                        cout << "\ncongratulation! You won :D" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "wrong! :(" << endl;
                    attempt--;
                    cout << "remaining attempts are " << attempt << endl;
                }
            }
            if (attempt == 0)
            {
                lose += 1;
                cout << "Alas! You lose the game! ;(" << endl;
            }
        }
        else if (start == 'E' || start == 'e')
        {
            char hidden_words[8] = { '_','_','_', '_', '_','_','_','_' };
            int attempt = 3, count = 0;
            bool hint = false;
            for (int i = 0; arr5[i] != '\0'; i++)
            {
                cout << "_ ";
            }
            cout << endl;
            while (attempt != 0)
            {
                cout << "\nenter letter" << endl;
                cin >> guess;
                if (guess == arr5[0] || guess == arr5[1] || guess == arr5[2] || guess == arr5[3] || guess == arr5[4] || guess == arr5[5] || guess == arr5[6] || guess == arr5[7])
                {
                    cout << "Correct! :)" << endl;
                    for (int i = 0; i < 8; i++)
                    {
                        if (arr5[i] == guess)
                        {
                            hidden_words[i] = arr5[i];
                            hint = true;
                        }
                    }
                    if (hint == true)
                    {
                        for (int i = 0; i < 8; i++)
                        {
                            cout << hidden_words[i] << " ";
                        }
                        count++;
                    }
                    if (count == 8)
                    {
                        win += 1;
                        cout << "\ncongratulation! You won :D" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "wrong! :(" << endl;
                    attempt--;
                    cout << "remaining attempts are " << attempt << endl;
                }
            }
            if (attempt == 0)
            {
                lose += 1;
                cout << "Alas! You lose the game! ;(" << endl;
            }
        }
        else
        {
            cout << "please enter correct letter" << endl;
        }
        cout << "do you want to play more?\nPress any key between'a-e/A-E' to continue \nPress 'N' to exit" << endl;
        cin >> start;
        if (start == 'N')
        {
            cout << "Your win count is " << win << endl;
            cout << "Your lose count is " << lose << endl;
        }
    } while (start != 'N');
    return 0;
}
