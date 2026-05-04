#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

struct Item {
    std::string name;
    int quantity;
    int power;
    bool consumable;
};
bool isNumber(const std::string& s);
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
