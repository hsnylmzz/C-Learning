#ifndef DYNAMICLIST_H
#define DYNAMICLIST_H
struct listItem{
   int item;
   listItem *next;
};

class dynamicList
{
    public:
        dynamicList();
        void insertItemDesc(int item); //Insert an item in a descending manner (buyukten kucuge dogru eleman ekleme)
        void insertItemAsc(int item); //Insert an item in an ascending manner (kucukten buyuge dogru eleman ekleme)
        void removeItem(int item); //remove the items with the given value. (verilen degerdeki butun elemanlari sil)
        listItem* searchItem(int item); //find the first occurance of the item. item ile verilen ilk degeri listede bul.
        void printList();
        virtual ~dynamicList();

    protected:

    private:
        void removeList(); //remove the entire list (butun listeyi sil)
        listItem *listHead;
};

#endif // DYNAMICLIST_H
