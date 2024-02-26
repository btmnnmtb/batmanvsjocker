#include <iostream> 
#include <cctype> 
#include <algorithm> 
#include <cstring> 
#include <conio.h> 
#include <random> 
#include "прррррррррррррррр.h"
using namespace std;

int main()
{
    int z = 1;
    do
    {
        setlocale(LC_ALL, "Russian");
        char s[100] = { "Svet vsemohusi spasi mou dushu" };



        cout << "Ваше слово: " << s;
        cout << "\nВыберите действие";
        cout << "\n1. Слово выводится задом наперед";
        cout << "\n2. Вывести слово без гласных";
        cout << "\n3. Вывести слово без согласных";
        cout << "\n4. Рандомно раскидать буквы заданного слова";
        cout << "\n5. Выйти из программы";
        cout << "\n";
        cin >> z;
        if (z == 1)
        {
            string v = s;
            reverse(v.begin(), v.end());
            cout << v << endl;
        }
        else if (z == 2)
        {

            

                int len = strlen(s);
                for (char i = 0; i < len; ++i)
                {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    {
                        len--;
                        int j = i;
                        for (j = i; j < len; ++j)
                        {
                            s[j] = s[j + 1];
                        }
                        s[j] = 0;
                    }
                }
                puts(s);
                    
        }
        else if (z == 3)
        {
            int len = strlen(s);
            for (char i = 0; i < len; ++i)
            {
                if (s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Z' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'v' || s[i] == 'w' || s[i] == 'w' || s[i] == 'x' || s[i] == 'z')
                {
                    len--;
                    int j = i;
                    for (j = i; j < len; ++j)
                    {
                        s[j] = s[j + 1];
                    }
                    s[j] = 0;
                }
            }

            puts(s);
        }
        else if (z == 4)
        {
            string v = s;
            random_device rd;
            mt19937 g(rd());
            shuffle(v.begin(), v.end(), g);
            cout << v << endl;
        }
        
    } while (z != 5);
}

