#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(const string& text);
int countwords ( const strings& text);
string Reverse(const string& text);
string CapitalizeSecondletter(const string& text);

int main


ofstream createFile("input.txt");
createFile << "This is the Advanced Computer Programming Module";
createFile.close();

ifstream infile("input.txt");

if(!infile) {
    cerr << "Error: could not open input.txt." << endl;
    return 1;
    }

    string FileData;
    getline(infile,FileData);
    inFile.close();

    cout << " ---Original Text -----" << endl;
    cout << FileData << endl << endl;

    int vowelCount = countVowels (FileData);
    count << "Number of words:" << wordcount << endl;

    string reversedText = Reverse (FileData);
    cout << "\n-----Reversed Text-----" << endl;
    cout << reversedText << end;

    string capitalizedText = CapitalizeSecondletter(Filedata);
    cout << "\n----Capitalize Second Letter ---" << endl;
    cout << capitalizeText << endl;

    return 0;
}
int countVowel(const string& text) {
    int count = 0;
    for (char c : text) {
        char lowerC = to lower (c);
        if (lowerC == 'a) || lowerC == 'i' || lowerC == '0' || lowerC == 'u'{
            count++;
         }
    }
    return count;
}
int countwords(const strings& text) {
    int count = 0;
    bool inWord = false;

    for (char c : text){
    if(isalnum(c)) {
        if (inWord){
            count++;
            inWord = true;
    }
}else {
    inWord = false;
    }
}
return count;
}

string CapitalizeSecondletter(const string& text) {
    string result = text;
    bool isSecondLetter = false;

    for (int i = 0, i < result. length(); i++) {
        if (isalpha(result[i])) {
            if (isSecondLetter){
                result [i] = toupper(result[i]);
            isSecondLetter = false;
            }else {
                isSecondLetter = true;
            }        
        } else {
            isSecondLetter = false;
        }
    }
return result;
}