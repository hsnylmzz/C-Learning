#include<iostream>
using namespace std;

class bufferType //5 points
{
    public:
        bufferType();
        virtual ~bufferType();
        virtual int writeItem(int)=0;
    protected:
        /*
        virtual bool isBufferEmpty()=0;
        virtual bool isBufferFull()=0;
        int writeIndex;
        int *items;
        int size;
        */
};
bufferType::bufferType(){
    size = 10;
    items = new int[size];
    writeIndex=0;
}
bufferType::~bufferType(){
  delete [] items;
}

class fifo : public bufferType
{
    public:
        fifo();
        fifo(long long);
        virtual ~fifo();
        int writeItem(int);
    protected:
        bool isBufferEmpty();
        bool isBufferFull();
        int getCurrentDepth();
    private:
        int readIndex;
};

fifo::fifo(){

}
fifo::fifo(long long _size){
  size = _size;
  items = new int[size];
  writeIndex=0;
  readIndex = 0;
}
int fifo::writeItem(int itemIn){//5 points
  /*if(writeIndex<size){
    items[writeIndex] = itemIn;
    writeIndex++;
  }
  return writeIndex;*/
}

bool fifo::isBufferFull(){ //5 points
    /*
    return (writeIndex==size-1)?true:false;
    */
}

bool fifo::isBufferEmpty(){//2 points
    /*
    return (writeIndex==readIndex)?true:false;
    */
}
int fifo::getCurrentDepth(){ //5 points
 /*
  if(writeIndex>readIndex){
    return writeIndex - readIndex;
  }
  else{
    return 0;
  }
  */
}
fifo::~fifo(){

}
class stack : public bufferType
{
    public:
      stack();
      stack(long long);
      virtual ~stack();
      int writeItem(int);
      const int& operator[](int index)const;
    protected:
      bool isBufferEmpty();
      bool isBufferFull();
    private:
};

const int& stack::operator[](int index)const{//3 points
 /*
  static int rt = 0;
  if(index>-1){
    rt = items[index];
  }
  return rt;
  */
}
bool stack::isBufferEmpty(){//2 points
   /*
  return (writeIndex==size-1)?true:false;
    */
}
bool stack::isBufferFull(){ // 3 points
   /*
   return (writeIndex==0)?true:false;
   */
}
stack::~stack(){

}
stack::stack(){

}
stack::stack(long long _size){
  size = _size;
  items = new int[size];
  writeIndex=0;
}

int stack::writeItem(int itemIn){//5 points
  /*
    if(writeIndex<size){
    items[writeIndex] = itemIn;
    writeIndex++;
  }
  return writeIndex;
  */
}

void write_buffer_items(bufferType &buffer, int item){
    buffer.writeItem(item);
}


int main()
{
    int stack_items[] = {1,2,3,4,5};
    int fifo_items[] = {6,7,8,9,10};
    stack s(sizeof(stack_items)/sizeof(int));
    fifo f(sizeof(fifo_items)/sizeof(int));
    for(unsigned int i=0; i<sizeof(stack_items)/sizeof(int); i++)
    {
        write_buffer_items(s, stack_items[i]);
    }
    for(unsigned int i=0; i<sizeof(fifo_items)/sizeof(int); i++)
    {
        write_buffer_items(f, fifo_items[i]);
    }
    cout<<s[1];
    return 0;
}
