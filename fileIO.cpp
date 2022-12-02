#include<iostream>
#include<fstream>

using namespace std;

int main(){
//for writing in the file    
    //  string text;
    // ofstream out("sample.txt");
    // cout<<"enter the text : " <<endl;
    // cin>>text;
    // out<<text;

//for reading the file
    string content;
    ifstream in("sample2.txt");
    in>>content;
    cout<<"the content is : "<<content<<endl;
}
