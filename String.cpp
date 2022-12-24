// This file contains some useful functions realted to string that makes our easier .... Hope u liked it....😊
1: TO split a string onn the basis of string 
   string s="Hello World aa";
   vector<string>a;
   string t="";
   for(auto i:s)
   {
       if(i==' ')
       {
           a.push_back(t);
           t="";
       }
       else t+=i;
   }
   if(t.length()>0)a.push_back(t);
          or use string stream
     string s="Hello World";
    istringstream ss(str);
    string word;
    while (ss >> word)
    {
        // print the read word
        cout << word << "\n";
    }
    Output: Hello 
            World
  2: using stringstream object of c++
    Examples:
    1. Count the number of words in a string:
       string s="Hello World aa";
   stringstream str(s);
   string word="";
   int c=0;
   while(str>>word)
   {
       c++;
       
   }
   cout<<c;
   
   2:Print frequencies of individual words in a string
      Tradtional Approach: Split words on the basis of the space store them in a vector and then use map data structure to find the frequency of the words;
        Code:
          string s="Hello World";
         vector<string>a;
         string t="";
         for(auto i:s)
         {
             if(i==' ')
             {
                 a.push_back(t);
                 t="";
             }
             else t+=i;
         }
         if(t.length()>0)a.push_back(t);
         unordered_map<string,int>m;
         for(auto i:a)
         {
             m[i]++;
         }
         for(auto i:m)
         {
             cout<<i.first<<"->"<<i.second;
         }
        Using stringstream:
        {
              string s="Hello World";
              unordered_map<string,int>m;
              stringstream str(s);
              string word;
              while(str>>word)
              {
                  m[word]++;
              }
               for(auto i:m)
               {
                   cout<<i.first<<"->"<<i.second;
               }
          }
