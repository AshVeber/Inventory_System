#include <iostream>
#include <vector>

struct Item {
    std::string name;
    int quantity;
    int power;
    bool consumable;
};

void Menu() {
    std::vector<std::string> menu = {"Show item", "Add item", "Remove item", "Use item", "Exit"};
    std::vector<int> nums = {1, 2, 3, 4, 5};

    for(size_t i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << ". " << menu[i] << std::endl;
    }
}

int main() {
    Menu();

    Item item;
    

    return 0;
}
