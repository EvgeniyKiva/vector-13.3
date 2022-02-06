#include <iostream>
#include <vector>

int main() {
    std:: vector <int> vec{};
    int n;
    std::cin >> n;
    while (n!=-1){
        if (vec.size()<20){
            vec.push_back(n);
        }
        else{
            vec.erase(vec.begin());
            vec.push_back(n);
        }
        std::cin>>n;
    }

    for (int i=0;i<vec.size(); i++){
        std::cout << vec[i]<< " ";
    }

    return 0;
}
