#include <iostream>
#include "Item.h"

int main() {
    Item item1("Book", 12.99);
    item1.display();

    Item item2;
    item2.setName("Pen");
    item2.setPrice(1.49);
    item2.display();

    return 0;
}
