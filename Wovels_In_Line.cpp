#include <iostream>
#include <string>
using namespace std;

int sotter(const string& sentence)
{
    int count = 0;

    for(char ch : sentence)
    {
        char lowech = tolower(ch);
        
        if(lowech == 'a' || lowech == 'e' || lowech == 'i' || lowech == 'o' || lowech == 'u')
        {
            count++;
        }
    }
    return count;
}

int main ()
{   
    string sentence ;
    cout << "Enter the word your sentence down below : ";
    getline(cin, sentence);

    int vowels =  sotter(sentence);

    cout << "The number of wovels in your sentence are " << vowels << "wovels" << endl;

    return 0;
}
