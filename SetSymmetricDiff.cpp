//set_symmetric_difference in CPP


#include <iostream>     // std::cout  
#include <algorithm>    // std::set_union, std::sort  
#include <vector>       // std::vector  
  
using namespace std;   
    
int main()   
{     
    // students attending first class   
    std::vector<string> class1{ "Nikita", "Deep", "Aman", "Divya" };   
    
    // students attending second class   
    std::vector<string> class2{ "Nikita", "Amita", "Deep", "Priya", "Kashish" };   
    
    cout << "Students attending first class are : ";   
    for (auto i : class1) {   
        cout << i << " ";   
    }   
    cout << "\nStudents attending second class are : ";   
    for (auto i : class2) {   
        cout << i << " ";   
    }   
    
    // to store the result of symmetric difference   
    std::vector<string> result(10);   
    
    std::vector<string>::iterator it;   
    
    // finding symmetric difference   
    it = set_symmetric_difference(class1.begin(),   
                                  class1.end(), class2.begin(), class2.end(), result.begin());   
    
    cout << "\n\nList of students that are not taking both classes :";   
    
    for (std::vector<string>::iterator i = result.begin(); i != it; i++) {   
        cout << *i << " ";   
    }   
    return 0;   
} 
