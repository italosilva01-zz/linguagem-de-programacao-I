
#include <iostream>
// =========================
// (1) Local minimum in an array.
// =========================

 int* localMin( int* first, int* last){
    
    int step = (last - first) / 2;
    int* mid = first + step;
    
    if(first == mid){
       return first;
    }
    
    if (*mid < *(mid-1) && *mid < *(mid +1)){
       return mid;
    }else{
       if(*(mid-1) < *(mid+1)){
          last = mid;

       }else if(*(mid +1)< *(mid-1)) {

          first = mid;
       }
          return localMin(first , last);

    }

}


int main(){
   int vetor [] = {3,5,4,2,10,30};
    //Get the final (open) of array
    int n  = sizeof(vetor)/sizeof(vetor[0]);

    std::cout <<"Hello, world!"<<std::endl;
    std::cout<<"local-minimum : "<< *localMin(&vetor[0],&vetor[n]);
    
    return 0;

}