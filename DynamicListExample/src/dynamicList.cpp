#include "dynamicList.h"
#define NULL 0

dynamicList::dynamicList()
{
    listHead = NULL;
    //ctor
}
void dynamicList::insertItemDesc(int item){

   if(listHead == NULL) {
     listHead = new listItem;
     listHead->item = item;
     listHead->next = NULL;

   } else {
      listItem *newItem = new listItem;
      newItem->item = item;

      listItem *currentListItem = listHead;
      if(currentListItem->next == NULL) { //we have one item in the list
         if(currentListItem->item < item){
            newItem->next = currentListItem;
            listHead = newItem;
         } else {
             currentListItem->next = newItem;
         }
         return;
      }

      //Move the currentItem pointer until the correct item is found
      //currentItem pointeri dogru noktaya tasi
      while(currentListItem->next != NULL && currentListItem->next->item > item ){
        currentListItem = currentListItem->next;
      }

      //Eger hala liste basindaysan liste basina ekle ve liste basi pinterini guncelle
      if(currentListItem->item <= item && currentListItem == listHead){
        newItem->next = currentListItem;
        listHead = newItem;
      } else{
        if(currentListItem->next != NULL){//Check if we are at the end of the list, if not insert in the middle.
           newItem->next = currentListItem->next;
        }
        currentListItem->next = newItem;
      }
   }
}

dynamicList::~dynamicList()
{
    //Butun listeyi sil Burada!!!
    //dtor
}
