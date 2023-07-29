1:  to erase a key from  map: map_name.erase(key)
    The set::count() is a built-in function in C++ STL which returns the number of times an element occurs in the set
.   It can only return 1 or 0 as the set container contains unique elements only. 
          Syntax:set_name.count(element) 
     
2:  substr(position,length): generates string from positon of length mentioned
    if(length is not given only one parameter is given then from pos till end substring is formed;
3:  1) accumulate(): This function returns the sum of all the values lying in a range between [first, last) with the variable sum.
                     accumulate(first, last, sum);
                              or
                      accumulate(first, last, sum, myfun); 
                     Parameters:
                     first, last: first and last elements of range whose elements are to be added
                     sum:  initial value of the sum
                     myfun: a function for performing any specific task. 
                                                                                               
    2) partial_sum( ): This function assigns a partial sum of the corresponding elements of an array to every position of the second array. 
                       It returns the partial sum of all the set of values lying between [first, last) and stores it in another array b. 
                       Syntax:
                       partial_sum(first, last, b);
                              or
                       partial_sum(first, last, b, myfun);
                       Parameters:
                       first, last: first and last element of range whose elements are to be added
                       b: index of array where  corresponding partial sum will be stored
                       myfun: a user-defined function for performing any specific task
                       
     3)lower_bound:    It returns the first index of the element if it occurs and if does not occur then it will return an iterator pointing to the element 
                       which is immediate next of the given element.
                        Syntax: Iterator lower_bound (Iterator first, Iterator last, const val)
                               Iterator lower_bound (Iterator first, Iterator last, const val) -vector_name.begin() //for index of the element.
                         Complexity:O(n*log(n))
            
     4)upper_bound:    upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’. 
                        Syntax:Iterator upper_bound (Iterator first, Iterator last, const val) 
                                Iterator upper_bound (Iterator first, Iterator last, const val) -vector_name.begin();
                         Complexity:O(n*log(n))
                                                                                          
                                                                                          
    5) Remove spaces from the string:
                           SYNTAX: str.erase(remove(str.begin(), str.end(), ' '), str.end());
    6) Map find():   Returns an iterator or constant iterator that refers to the position where key is present in the map .If the key is not present in map ,it returns 
                    an iterator or constant which refers to map.end().
    7) Queue of Pairs: Syntax: queue<pair<int,int>>p;
                               to Push : p.push({value1, value2});
                               to acess first element from the pair: p.front().first;
                               to access second element from the pair: p.front().second
                               to pop: p.pop();
    8) Str.find() = It is used to find the first occurence of the substring in the specified string.
                    If string is not found it returns string::npos
                    EX: s1="geeks for geeks" s2="geeks"
                        if(s1.find(s2)!=string::npos)cout<<s1.find(s2)
    9) Nested map: map<int, map<int, multiset<int>>>nodes;
                   Here the key is int with values containing key as int and values  as multiset.
                    TIme complexity for  insetion in multiset :O(nlogn)                                                                               
                   Illustration: 
                      int main(){
                    map<int,map<int, multiset<int>>>nodes;
                    nodes[1][2].insert(10);
                    nodes[1][2].insert(40);
                    nodes[1][2].insert(30);

                    nodes[1][3].insert(15);
                    nodes[1][3].insert(25);


                    for(auto i:nodes){
                        cout<<" Key1 "<<i.first<<endl;
                        for(auto j:i.second){
                            cout<<"  Key2 "<<j.first<<endl;
                            for(auto k:j.second){
                                cout<<"   Value"<<k<<endl;

                            }

                        }
                    }
                }
                        Output:
                          Key1 1
                            Key2 2
                             Value10
                             Value30
                             Value40
                            Key2 3
                             Value15
                             Value25                                                                                           
10: BInary Search Stl
    binary_search(startaddress, 
              endaddress, valuetofind)
                                                             
