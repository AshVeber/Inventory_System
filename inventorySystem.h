#pragma once
#include <string>
#include <vector>

struct Item {
    std::string name;
    int quantity;
    int power;
    bool consumable;
};
inline bool isNumber(const std::string& s) {
    if(s.empty()) {
        return 0;
    }
    for(char const &c : s) {
        if(!(isdigit(c))) {
            return 0;
        }
    }
    return 1;
}
void Menu();
void showitem(const std::vector<Item>& items);
extern std::vector<Item> shopitems;
void itemshop();
void saveitem(std::vector<Item>& items);
std::vector<Item> loaditem();
void additem(std::vector<Item>& items, std::vector<Item>& shopitems);
void saveshop(std::vector<Item>& shopitems);
std::vector<Item> loadshop();
void useitem(std::vector<Item>& items);
void removeitem(std::vector<Item>& items);

struct User {
    std::string name;
    int hp;
};
