# cppjieba源码地址 ：
> [https://github.com/yanyiwu/cppjieba](https://github.com/yanyiwu/cppjieba "cppjieba")


这个是我在自己的Linux系统上为了方便使用，做了部分设置，只copy了源码的一部分代码：
>cppjieba\include\ 下的cppjieba文件夹<br>
>cppjieba\ 下的dict文件夹<br>
>cppjieba\deps\ 下的limonp<br>



1. 把dict文件夹和limonp文件夹都放到拷贝的cppjieba文件夹下<br>
2. 把cppjieba文件夹拷贝到系统目录/usr/local/include下<br>
`sudo cp -r cppjieba/ /usr/local/include/`
3. 修改Jieba.hpp文件权限<br>
`sudo chmod a+w Jieba.hpp`
4. Jieba.hpp里在自己命名的命名空间里创建对象<br>
```C++
namespace meihao
{
  	const char* const DICT_PATH = "/usr/local/include/cppjieba/dict/jieba.dict.utf8";
  	const char* const HMM_PATH = "/usr/local/include/cppjieba/dict/hmm_model.utf8";
  	const char* const USER_DICT_PATH = "/usr/local/include/cppjieba/dict/user.dict.utf8";
  	const char* const IDF_PATH = "/usr/local/include/cppjieba/dict/idf.utf8";
  	const char* const STOP_WORD_PATH = "/usr/local/include/cppjieba/dict/stop_words.utf8";
    
  	cppjieba::Jieba jieba(DICT_PATH,
  			HMM_PATH,
  			USER_DICT_PATH,
  			IDF_PATH,
		    STOP_WORD_PATH);
};
```
5. 现在可以在其他随意地方使用了，只要头文件引入：
```C++
#include<cppjieba/Jieba.hpp>
```
6. 文件中的demo.cpp是源码中的一个示例文件,mydemo.cpp是我做了一点点改动后的使用方法示例,这样做就不用每次使用都clone下所有源代码,在指定路径下编写代码对中文语料进行分词。
