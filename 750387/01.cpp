#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cctype>
using namespace std; 

int main(){
    string s, s1;
    string str;
    int n;
    cout << "Key Word: ";
    getline(cin, str);
    //
    string SS[99];
    vector <string> vSS;
    //
    n=0;
    s1="";
    for (int i=0; i < str.length(); i++){
        s = toupper(str[i]);
        if (s != " "){
           SS[n] += s;
           //
           s1 += s;
        }
        if (s == " " || i==(str.length()-1) ){
            //cout << SS[n] << endl; 
            n++;
            //
            vSS.push_back(s1);
            s1="";
            //cout << vSS.back() << "*" << endl;
        }     
    }
    //cout << SS[n] << endl;
    //
    // 用 iterator 來印出 vector 內所有內容
    for (vector<string>::iterator it = vSS.begin() ; it != vSS.end(); ++it) {
        //cout << *it << " ";
    //}
    //
    //for (int i=0; i<=n; i++){
        s1 = *it;//vSS[i];//SS[i];
        //
        if (s1!=" " && !s1.empty()){
            if (strcasecmp(s1.c_str(), "for") == 0) {
                cout << "4";
            }
            else if (strcasecmp(s1.c_str(), "to") == 0) {
                cout << "2";
            }
            else if (strcasecmp(s1.c_str(), "you") == 0) {
                cout << "u";
            }
            else if (strcasecmp(s1.c_str(), "and") == 0) {
                cout << "n";
            }
            else {
                cout << s1[0];
            }
        }
    }
    cout << endl;
    /*
    size_t index = 0;
    for (char c : str) {
        c = toupper(c);
        cout << index++ << " - '" << c << "'" << endl;
    }

    */
    return 0;
}
/*
//函數功能: 傳入一個字串s，以splitSep裡的字元當做分割字符，回傳vector<string>
vector<string> splitStr2Vec(string s, string splitSep)
{
    vector<string> result;
    int current = 0; //最初由 0 的位置開始找
    int next = 0;
    while (next != -1)
    {
        next = s.find_first_of(splitSep, current); //尋找從current開始，出現splitSep的第一個位置(找不到則回傳-1)
        if (next != current)
        {
            string tmp = s.substr(current, next - current);
            if(!tmp.empty())  //忽略空字串(若不寫的話，尾巴都是分割符會錯)
            {
                result.push_back(tmp);
            }
        }
        current = next + 1; //下次由 next + 1 的位置開始找起。
    }
    return result;
}
*/