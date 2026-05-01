#include <iostream>
#include <string>
#include <vector>

struct Item {
    std::string name;
    int quantity;
    int power;
    bool consumable;
};
bool isNumber(const std::string& s) {
    if(s.empty()) {
        return false;
    }
    for(char const &c : s) {
        if(!(isdigit(c))) {
            return false;
        }
    }
    return true;
}
void Menu() {
    std::vector<std::string> menu = {"Show item", "Add item", "Remove item", "Use item", "Exit"};
    std::vector<int> nums = {1, 2, 3, 4, 5};

    for(size_t i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << ". " << menu[i] << std::endl;
    }
}
void showitem(const std::vector<std::string>& items) {
    for(std::string item : items) {
        std::cout << item << "\n";
    }
}
std::vector<Item> shopitems = {{"Axe", 10, 3}, {"Pickaxe", 5, 4}, {"Hoe", 11, 1}, {"Sword", 20, 5}, {"Shovel", 31, 2}};
void itemshop() {
    std::cout << "---------------\n   ITEM SHOP\n---------------" << std::endl;
    for(size_t i = 0; i < shopitems.size(); ++i) {
        std::cout << i+1 << ") Name: " << shopitems[i].name << " | Quantity: " << shopitems[i].quantity << " | Power: " << shopitems[i].power << std::endl;
    }
}
void additem(std::vector<std::string>& items) {
    std::string input;

    while(true) {
        itemshop();
        std::cout << "What item do you want to add?" << std::endl;
        std::cout << ">> ";
        std::cin >> input;
        if(isNumber(input)) {
            int iinput = stoi(input);
            if(iinput >= 1 && iinput <= (int)shopitems.size()) {
                items.push_back(shopitems[iinput - 1].name);
                std::cout << "Item added." << std::endl;
                break;
            }else {
                std::cout << "Enter the valid number." << std::endl;
                continue;
            }
        }else {
            std::cout << "Enter the number please." << std::endl;
            continue;
        }
    }
}

int main() {
    std::cout << "===============\n   INVENTORY\n===============" << std::endl;
    std::vector<std::string> items;
    std::string input;
    while(true) {
        Menu();
        std::cout << ">> ";
        std::cin >> input;
        if(isNumber(input)) {
            int iinput = stoi(input);
            if(iinput == 1) {
                if(!(items.empty())) {
                    showitem(items);
                }else{
                    std::cout << "You do not have items." << std::endl;
                }
            }else
            if(iinput == 2) {
                additem(items);
            }else
            if(iinput == 3) {

            }else
            if(iinput == 4) {

            }else
            if(iinput == 5) {
                break;
            }else {
                std::cout << "Enter the valid number." << std::endl;
                continue;
            }
        }else {
            std::cout << "Enter the number please." << std::endl;
            continue;
        }
    }
    
    return 0;
}
