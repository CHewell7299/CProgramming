#include <iostream>
#include <vector>

void print(const std::vector<int>& v);
void rotateRight(std::vector<int>& v, int k);
void rotateLeft(std::vector<int>& v, int k);

int main(){
    //Initialization list
    std::vector<int> v {1,2,3,4,5,6};
    print(v);
    
    //Size and Default Val
    std::vector<int> v2(5, 10);
    print(v2);
    
    //Create a copy
    std::vector<int> v3(v);
    print(v3);
    
    //Number of elements
    std::cout << v3.size() << std::endl;
    
    //Front and back
    std::cout << "Front: " << v3.front() << std::endl;
    std::cout << "Back: " << v3.back() << std::endl;
    
    //Add to end
    v3.push_back(8);
    v3.push_back(9);
    
    //Remove last element
    v3.pop_back();
    std::cout << "After addition and removal\n";
    print(v3);
    
    //Iterators - object enables traversal over elements
    /*
    begin(): point to first
    end():point to one after last
    */
   
    // Insert an element
    v3.insert(v3.begin(), 100);
    print(v3);
    
    // Insert 999 in middle
    int middle = v3.size()/2;
    v3.insert(v3.begin()+middle, 999);
    print(v3);
    
    //Erase elements (iterator)
    v3.erase(v3.begin()+1);
    print(v3);
    
    rotateRight(v3, 2);
    print(v3);
    
    rotateLeft(v3, 2);
    print(v3);
    
    return 0;
}

void print(const std::vector<int>& v){
    for (int el : v){
        std::cout << el << ' ';
    }
    std::cout << std::endl;
}

void rotateRight(std::vector<int>& v, int k){
    k %= v.size();
    for(int i=0; i<k; i++){
        v.insert(v.begin(), v.back());
    v.pop_back();
    }
}

void rotateLeft(std::vector<int>& v, int k){
    k %= v.size();
    for(int i=0; i<k; i++){
        v.insert(v.end(), v.front());
        v.erase(v.begin());
    }
}