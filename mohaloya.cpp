#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


int main()
{
string TransliterationTable = new string[26];

string Transliterate(char English) {

   bool upperCase = char.IsUpper(English);
   English = English.ToUpper();
   int index = (char)English - 0x41;
   string result = TransliterationTable[index];
   if (upperCase)
      result = result.ToUpper;
   return TransliterationTable[index];
}

string Transliterate(string English) {
   System.Text.StringBuilder sb = new System.Text.StringBuilder();
   foreach(char eng in English)
       sb.Append(this.Transliterate(eng));
   return sb.ToString();
}
return 0;
}
