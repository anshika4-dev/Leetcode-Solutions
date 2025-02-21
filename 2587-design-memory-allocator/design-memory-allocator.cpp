class Allocator {
public:
  Allocator(int n) {
    this->memSize = n;
    this->memory.resize(n , 0 );

  }

// void printMem(int cols = 8) {
//
//    for (int adr = 0; adr < this->memSize; adr++) {
//      std::cout << this->memory[adr];
//      if ((adr + 1) % cols == 0) {
//        std::cout << "\n";
//        for (int d = 0; d < cols; d++) {
//          std::cout << "----";
//        }
//
//        std::cout << "\n";
//      } else {
//        std::cout << " | ";
//      }
//    }
// }

  int allocate(int size, int mID) {
    if (size > this->memSize) {
      return -1;
    }

    int freeLocCount = 0;
    int adr = 0;
    for (adr = 0; adr < this->memSize; adr++) {

      if (this->memory[adr] == 0) {
        freeLocCount++;
      } else {
        freeLocCount = 0;
      }

      if (freeLocCount == size) {
        while (size) {
          this->memory[adr + 1 - size] = mID;
          size--;
        }
        return adr + 1 - freeLocCount;
      }
    }

    return -1;
  }

  int freeMemory(int mID) {
    int count = 0;
    for (int adr = 0; adr < this->memSize; adr++) {
      if (this->memory[adr] == mID) {
        this->memory[adr] = 0;
        count++;
      }
    }

    return count;
  }

private:
  int memSize;
  std::vector<int> memory;
};


/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->freeMemory(mID);
 */