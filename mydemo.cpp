 ///
 /// @file    mydemo.cpp
 /// @author  meihao1203(meihao19931203@outlook.com)
 /// @date    2018-05-27 20:51:13
 ///
 
#include<cppjieba/Jieba.hpp>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
using namespace meihao;
int main()
{
	string s = "我是云南大学的一名学生";
	cout<<"[demo] Cut With HMM"<<endl;
	vector<string> words;
	jieba.Cut(s,words,true);
	cout<<limonp::Join(words.begin(),words.end(),"/")<<endl;

	cout<<"[demo] Cut Without HMM"<<endl;
	jieba.Cut(s,words,false);
	cout<<limonp::Join(words.begin(),words.end(),"/")<<endl;
}
//[demo] Cut With HMM
//我/是/云南大学/的/一名/学生
//[demo] Cut Without HMM
//我/是/云南大学/的/一名/学生
