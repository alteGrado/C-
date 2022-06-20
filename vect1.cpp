#include <vector>
#include <string>
#include <iostream>
 
void print_with_quantity (std::vector<char> lett)
{
    for (auto &i : lett)  {
	std::cout << i << " ";
    }
    std::cout << '\n';
    std::cout << "vector contains " << lett.size() << " elements.\n";
}
 

int main()
{
    std::vector<char> letters {'o','m','g','w','t','f'};
    const char ins = 'v';
    print_with_quantity (letters);
    if(!letters.empty())  {
	std::cout << "First character - '" << letters.front() << "'.\n";
        std::cout << "Last character - '" << letters.back() << "'.\n";
    }

    letters.push_back('h');
    print_with_quantity(letters);

    letters.erase (letters.begin());
                                    
                                    // removes the element at position pos
                                    // iterator erase(const_iterator pos); 
    print_with_quantity(letters);

    letters.erase (letters.begin()+4,letters.end());

                                    // removes elements in a range (first,last)
                                    // iterator erase(const_iterator first,const_iterator last);
    print_with_quantity(letters);

    letters.insert (letters.begin()+3,ins); 

                                    // insert value before the element pointed to by pos
                                    // iterator insert(const_iterator pos,const T& value) 
    print_with_quantity(letters);

    letters.insert (letters.begin()+2,7,81);
                                
                                    // insert count copies of value beforethe element
                                    // pointed to by pos.
                                    // iterator insert(const_iterator pos,size_type count,
                                    // const T& value);

     

    print_with_quantity(letters);

    std::cout <<  "Enter a latter of the latin alphabet. " << std::endl; 
    char us_in;
    std::cin >> us_in ;
    letters.push_back(us_in);
    print_with_quantity(letters);

    std::cout << "Delete a character by writing the word 'del' : " << std::endl;
    std::string str1 = "del";
    std::string str2 = "end";
    std::string us_del;
    std::cin >> us_del;
        while (us_del != str2)
	  {   
            if (us_del == str1)
	        letters.pop_back();  // removes the last element of the vector
		print_with_quantity(letters);
            std::cout << "If you want to exit write 'end' : " << std::endl;
            std::cin >> us_del;
          }

	    
	    
return 0;
}
