#include <iostream>
#include <ctime>

#define TASK_ONE(a, b) (((a) >= (0)) && ((a)<(b)))
#define ARRAY_TASK_TWO(x) (x=rand() % 50)
#define TASK_THREE(arr, type) (sizeof(arr)/(type))


int main() {
  // Task 1
  std::cout << TASK_ONE(2,5) << std::endl;
  #undef TASK_ONE

  // Task 2  
  srand(time(NULL));
  const int size = 10;  
  int **Arr = new int*[size];
  
  for (int i = 0; i < size; i++){
      Arr[i] = new int [size];
  }
  for (int i = 0; i < size; i++){
      for (int j = 0; j <size ; j++){
          ARRAY_TASK_TWO(Arr[i][j]);
      }
  }
  for (int i =0; i < size; i++){
       delete [] Arr[size];
  }
 delete [] Arr ;
 #undef ARRAY_TASK_TWO 

 //Task 3
 int arr_t3[] = {2,4,5,1,3,6};
 std::cout << TASK_THREE(arr_t3, sizeof(int));    
 #undef TASK_THREE 
 return 0;
}
