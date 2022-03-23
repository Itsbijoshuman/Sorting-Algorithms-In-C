#include <stdio.h>
#include <string.h>

int choice1, length_int_array, length_str_array, int_array[100], str_array[100][100], search_choice,choice2,i;
int main()
{
    int choice;
    do
    {
    system("cls");
    printf("\n\t-=-=Program 5-=-=-\n");
    data_type_selection();
    menu:
    printf("\n\t-=-=-Menu-=-=-=-\n\n");
    printf("\t-=-=Insertion Sort-=-=- \n\n 1.) Insertion Sort(Ascending) \n 2.) Insertion Sort(Descending) \n\n\t-=-=-Selectioin Sort-=-=--= \n 3.) Selection Sort(Ascending) \n 4.) Selection Sort(Descending) \n\n\t-=-=-=QuickSort-=-=-=-=\n 5.) Quick Sort (Ascending) \n 6.) Quick Sort (Descending) \n\n\t-=-=-=Merge Sort-=-=-=-= \n 7.) Merge Sort (Ascending) \n 8.) Merge Sort (Descending) \n\n\t-=-=Other-=-=-=\n 9.) Show the Original Array \n 10.) Exit \n Choice : ");
    scanf("%d",&choice2);
    switch(choice2)
    {
        case 1 : if(choice1==1)
                    {
                    int_as_insertionSort();
                    printf("\nSorted Array : \n");
                    int_printArray();
                    goto menu;
                    }
                else
                {
                    str_as_insertionSort();
                    printf("\n Sorted Array : \n");
                    str_printArray();
                    goto menu;
                }
        case 2 : 
                  if(choice1==1)
                    {
                    int_ds_insertionSort();
                    printf("\nSorted Array : \n");
                    int_printArray();
                    goto menu;
                    }
                else
                    {
                    str_ds_insertionSort();
                    printf("\nSorted Array : \n");

                    for (i = 0; i <= length_str_array+1; i++)
                        printf(" %s ",str_array[i]);
                    printf("\n");
                    goto menu;
                    }
        case 3 :
                if (choice1==1)
                  {
                    int_selectionSort();
                    printf("\nSorted Array : \n");
                    int_printArray();
                    goto menu;
                  }
                else
                  { 
                    str_selectionSort();
                    printf("\nSorted Array : \n");
                    for ( i = 0; i <= length_str_array+1; i++)
                    printf(" %s ",str_array[i]);
                    printf("\n");
                    goto menu;
                  } 
        case 4 : 
                if (choice1==1)
                {
                  int_des_selectionSort();
                  printf("\nSorted Array : \n");
                  int_printArray();
                  goto menu;
                }
                else
                  { 
                    str_des_selectionSort();
                    printf("\nSorted Array : \n");
                  int i;
                  for (i = 0; i <= length_str_array+1; i++)
                      printf(" %s ",str_array[i]);
                  printf("\n");
                    goto menu;
                  }
        case 5 :
                if (choice1==1)
                {
                    quickSort(int_array,0,length_int_array-1);
                    printf("\nSorted Array : \n");
                    int_printArray();
                    goto menu;
                }
                else
                {
                  str_des_Quicksort(0,length_str_array);
                  printf("\nSorted Array : \n");
                  for ( i = length_str_array; i >= 0; i--)
                    printf(" %s ",str_array[i]);
                    printf("\n");
                    goto menu;
                }
        case 6 :
                if(choice1==1)
                {
                  des_Quicksort(int_array,0,length_int_array);
                  printf("\nSorted Array : \n");
                  int_printArray();
                  goto menu;
                }
                else
                {
                  str_des_Quicksort(0,length_str_array);
                  printf("\nSorted Array : \n");
                  for ( i = 0; i <= length_str_array+1; i++)
                    printf(" %s ",str_array[i]);
                    printf("\n");
                    goto menu;
                }   

        case 7:
                if(choice1==1)
                {
                    mergesort(int_array,0,length_int_array-1);
                    printf("\nSorted Array : \n");
                    int_printArray();
                }
                else
                {
                    str_mergesort(int_array,0,length_int_array-1);
                    printf("\nSorted Array : \n");
                    for ( i = 0; i <= length_str_array+1; i++)
                    printf(" %s ",str_array[i]);

                }
                goto menu;
        case 8:
                if(choice1==1)
                {
                mergesort(int_array,0,length_int_array-1);
                printf("\nSorted Array : \n");
                for ( i = length_int_array-1; i >= 0; i--)
                printf(" %d ",int_array[i]);
                printf("\n");
                }
                else
                {
                    str_mergesort(int_array,0,length_int_array-1);
                    printf("\nSorted Array : \n");
                    for ( i = length_str_array; i >= 0; i--)
                    printf(" %s ",str_array[i]);
                }
                goto menu;
        case 9 : 
                if(choice1==1)
                    {
                    printf("\nOriginal Array : \n");
                    int_printArray();
                    goto menu;
                    }
                 else
                {  printf("\nOriginal Array : \n");
                  int i;
                  for (i = 0; i <= length_str_array+1; i++)
                      printf(" %s ",str_array[i]);
                  printf("\n");;
                    goto menu;
                }

        case 10  :
                break;
        default : 
                printf("-=-=-=Invalid Choice-=-=-");
                goto menu;
    }

    printf("Do You Want to Repeat the Whole Program ? Press 1 : ");
    scanf("%d",&choice);
    }while(choice==1);
}
void data_type_selection()
{
	
data_selection:
    printf("\n\tData-Type Menu\n");
    printf("Enter the Data Type You Want to Input Data in : \n 1.) Integer \n 2.) Character \n Choice : ");
    scanf("%d", &choice1);
    switch (choice1)
    {
    case 1:
        printf("\n\tThe Selected Data Type is INTEGER\n");
        re:
        printf("Enter the Length Of the Integer Array : ");
        scanf("%d", &length_int_array);
        if(length_int_array<=0 || length_int_array>100)
        {
          printf("\n Invalid Choice !! , Enter Length Between 1 and 100 (inclusive)  \n");
          goto re;
        }
        for ( i=0; i < length_int_array; i++)
        {
            printf("Enter Element :- %d  : ", i + 1);
            scanf("%d", &int_array[i]);
        }
        break;
    case 2:
        printf("\n\tThe Selected Data Type is String\n");
        re1:
        printf("Enter the Length Of the Sring Array : ");
        scanf("%d", &length_str_array);
        if(length_str_array<=0 || length_str_array>100)
        {
          printf("\n Invalid Choice !! , Enter Length Between 1 and 100 (inclusive)  \n");
          goto re1;
        }
        for (int i = 0; i < length_str_array; i++)
        {
            printf("Enter Element :- %d  : ", i + 1);
            scanf("%s", &str_array[i][100]);
        }
        break;
    default:
        printf("\nInvalid option\n");
        goto data_selection;
    }
}

void int_as_insertionSort() 
{
  int count=0;
    printf("\n Steps : \n");
  for (int step = 1; step < length_int_array; step++) 
  {
    int key = int_array[step];
    int j = step - 1;
    printf("\nKey : %d\n",key);
    while (key < int_array[j] && j >= 0) {
      int_array[j + 1] = int_array[j];
      --j;
      count++;
      
      int_printArray();
    }
    int_array[j + 1] = key;
    int_printArray();
  }
  printf("\nTotal Number of Iterations : %d",count);
}

void int_ds_insertionSort()
{
  int count=0;
    printf("\n Steps : \n");
      for (int step = 1; step < length_int_array; step++) 
  {
    int key = int_array[step];
    int j = step - 1;
    printf("\nKey : %d\n",key);
    while (key > int_array[j] && j >= 0) 
    {
      int_array[j + 1] = int_array[j];
      --j;
      count++;
      int_printArray();
    }
    int_array[j + 1] = key;
    int_printArray();
  }
  printf("\nTotal Number of Iterations : %d",count);

}

void str_as_insertionSort()
{
  int count=0;
    printf("\n Steps : \n");
    for (int step = 1; step < length_str_array+1; step++) 
  {
    char key[100] ;
    strcpy(key,str_array[step]);
    int j = step - 1;
    printf("\nKey : %s\n",key);

    while ((strcmp(key , str_array[j])<0) && j >= 0) 
    {
      strcpy(str_array[j + 1],str_array[j]);
      --j;
      count++;
      str_printArray();
    }
    strcpy(str_array[j + 1],key);
    str_printArray();
    
  }
  printf("\nTotal Number of Iterations : %d",count);
}

void str_ds_insertionSort()
{
  int count=0;
    printf("\n Steps : \n");
    for (int step = 1; step < length_str_array+length_str_array; step++) 
  {
    char key[100] ;
    strcpy(key,str_array[step]);
    int j = step - 1;
    printf("\nKey : %s\n",key);

    while ((strcmp(key , str_array[j])>0) && j >= 0) 
    {
      strcpy(str_array[j + 1],str_array[j]);
      --j;
      count++;
    int i;
    for (i = 0; i <= length_str_array+1; i++)
        printf(" %s ",str_array[i]);
    printf("\n");
    }
    strcpy(str_array[j + 1],key);
    int i;
    for (i = 0; i <= length_str_array+1; i++)
        printf(" %s ",str_array[i]);
    printf("\n");
  }
  printf("\nTotal Number of Iterations : %d",count);
}

void int_printArray()
{
    int i;
    for (i = 0; i < length_int_array; i++)
        printf("| %d ", int_array[i]);
    printf(" | \n");
}

void str_printArray()
{
    int i;
    for (i = 1; i < length_str_array+1; i++)
        printf("| %s ",str_array[i]);
    printf(" | \n");
}

void int_selectionSort()
{
    int i, j, min_idx,count=0;
    printf("\n Sort Steps : \n");
  
    for (i = 0; i < length_int_array-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < length_int_array; j++)
          if (int_array[j] < int_array[min_idx])
            {
              min_idx = j;
              count++;
            }
  
        int_swap(&int_array[min_idx], &int_array[i]);
        printf("\nCurrent Replacement Element : %d\n",int_array[i]);
        int_printArray();
    }
    printf("\nTotal Number Of Iterations : %d\n",count);
}

void int_des_selectionSort()
{
    int i, j, min_idx,count=0;
    printf("\n Sort Steps : \n");
  
    for (i = 0; i < length_int_array-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < length_int_array; j++)
          if (int_array[j] > int_array[min_idx])
            {
              min_idx = j;
              count++;
            }
        int_swap(&int_array[min_idx], &int_array[i]);
        printf("\nCurrent Replacement Element : %d\n",int_array[i]);
        int_printArray();
    }
    printf("\nTotal Number Of Iterations : %d\n",count);
}

void int_swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void str_selectionSort()
{
    int i, j, min_idx,count=0;
    char temp[100];
    printf("\n Sort Steps : \n");
  
    for (i = 0; i < length_str_array; i++)
    {
        min_idx = i;
        for (j = i+1; j < length_str_array; j++)
          if (strcmp(str_array[j],str_array[min_idx])<0)
            min_idx = j;
        //str_swap(&str_array[min_idx], &str_array[i]);
        strcpy(temp,str_array[min_idx]);
        strcpy(str_array[min_idx],str_array[i]);
        strcpy(str_array[i],temp);
        count++;

        printf("\nCurrent Replacement Element : %s\n",str_array[i]);
        int i;
        for (i = 0; i <= length_str_array+1; i++)
        printf(" %s ",str_array[i]);
        printf("\n");
    }
    printf("\nTotal Number Of Iterations : %d\n",count);
}

void str_des_selectionSort()
{
    int i, j, min_idx,count=0;
    char temp[100];
    printf("\n Sort Steps : \n");
  
    for (i = 0; i < length_str_array; i++)
    {
        min_idx = i;
        for (j = i+1; j < length_str_array+length_str_array; j++)
          if (strcmp(str_array[j],str_array[min_idx])>0)
            min_idx = j;
  
        //str_swap(&str_array[min_idx], &str_array[i]);
        strcpy(temp,str_array[min_idx]);
        strcpy(str_array[min_idx],str_array[i]);
        strcpy(str_array[i],temp);
        printf("\nCurrent Replacement Element : %s\n",str_array[i]);
        count++;
        //str_printArray();
        int i;
        for (i = 0; i <= length_str_array+1; i++)
        printf(" %s ",str_array[i]);
        printf("\n");

    }
    printf("\nTotal Number Of Iterations : %d\n",count);
}

//asceding int quick sort
void swap(int *a, int *b) 
{
  int t = *a;
  *a = *b;
  *b = t;
}

int int_partition(int array[], int low, int high) 
{

  int pivot = array[high];
  int i = (low - 1);
  printf("\nSteps After Iteration: \n");
  int_printArray();
  for (int j = low; j < high; j++) 
  {
    if (array[j] <= pivot) 
    {
      i++;
      swap(&array[i], &array[j]);
    }
    
  }
swap(&array[i + 1], &array[high]);

return (i + 1);
}

void quickSort(int array[], int low, int high) 
{

  if (low < high) 
  {
    int pi = int_partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
  
}

//ascending str quick sort

int partition_str_aes(char array[],int low,int high)
{
  char pivot[100];
  strcpy(pivot,array[high-1]);

  int i = low-1;
  
  for(int j = low; j<=high-1;j++)
  {
    
    if(strcmp(array[j],pivot)<=0)
    {
      i++;
      str_des_swap(i,j);
    }
  }
  
  str_des_swap(i+1,high);
  return (i+1);
}
void aes_str_quicksort(char array[],int low, int high)
{
if (low < high)
  {
  int pi=partition_str_aes(str_array,low,high);
  aes_str_quicksort(array,low,pi-1);
  aes_str_quicksort(array,pi+1,high);

  }
}

//descending int quick sort

void des_swap(int Array[], int one, int two) {
    int temp = Array[one];
    Array[one] = Array[two];
    Array[two] = temp;
}

int des_partition(int Array[], int left, int right) {
    int pivot = Array[right];
    int leftPointer = left - 1;
    printf("\nSteps After Iteration : \n");
    int_printArray();
    int rightPointer = right;
    for (;;) 
    {
        while (Array[++leftPointer] > pivot) {
        }
        while (rightPointer > 0 && Array[--rightPointer] < pivot) {
        }
        if (leftPointer >= rightPointer) {
            break;
        } else
         {
            des_swap(Array, leftPointer, rightPointer);   
         }   
    }
    des_swap(Array, leftPointer, right);
    return leftPointer;
}

void des_Quicksort(int Array[], int left, int right) {
    if (left < right) {
        int PartitionPoint = des_partition(Array, left, right);
        des_Quicksort(Array, left, PartitionPoint - 1);
        des_Quicksort(Array, PartitionPoint + 1, right);
    }
}

//str des quick sort

void str_des_swap(int one, int two) {
   char temp[100];
   strcpy(temp,str_array[one]);
    strcpy(str_array[one],str_array[two]);
    strcpy(str_array[two],temp);
}

int str_des_partition(int left, int right) {
    char pivot[100];
    strcpy(pivot,str_array[right]);
    int leftPointer = left - 1;
    printf("\nSteps After Iteration : \n");
            int i;
        for (i = 0; i <= length_str_array+1; i++)
        printf(" %s ",str_array[i]);
        printf("\n");
    int rightPointer = right;
    for (;;) 
    {
        while (strcmp(str_array[++leftPointer], pivot)>0) {
        }
        while (rightPointer > 0 && strcmp(str_array[--rightPointer] , pivot)<0) {
        }
        if (leftPointer >= rightPointer) {
            break;
        } else {
            str_des_swap(leftPointer, rightPointer);   
        }   
    }
    str_des_swap(leftPointer, right);
    return leftPointer;
}

void str_des_Quicksort(int left, int right) {
    if (left < right) {
        int PartitionPoint = str_des_partition(left, right);
        str_des_Quicksort(left, PartitionPoint - 1);
        str_des_Quicksort(PartitionPoint + 1, right);
    }
}


int isArraySorted(int s[], int n) 
{
  int a = 1, d = 1, i = 0;

  while ((a == 1 || d == 1) && i < n - 1) {
    if (s[i] < s[i+1])
      d = 0;
    else if (s[i] > s[i+1])
      a = 0;
    i++;
  }

  if (a == 1)
    return 1;
  else if (d == 1)
    return 2;
  else
    return 0;
}


void mergesort(int a[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
mergesort(a,i,mid); 
mergesort(a,mid+1,j); 
merge(a,i,mid,mid+1,j); 
}
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
int temp[50]; 
int i,j,k;
i=i1; //beginning of the first list
j=i2; //beginning of the second list
k=0;
while(i<=j1 && j<=j2)
{
if(a[i]<a[j])
{
  temp[k++]=a[i++];
  int_printArray();
}
  else
  {
temp[k++]=a[j++];
int_printArray();
  }
}
while(i<=j1)
{ //copy remaining elements of the first list
temp[k++]=a[i++];
int_printArray();
}
while(j<=j2)
{ //copy remaining elements of the second list
temp[k++]=a[j++];
int_printArray();
}
//Transfer elements from temp[] back to a[]
for(i=i1,j=0;i<=j2;i++,j++)
a[i]=temp[j];
}


//str merge sort


void str_mergesort(char a[],int i,int j)
{
int mid;
    if(i<j)
    {
    mid=(i+j)/2;
    str_mergesort(a,i,mid); //left recursion
    str_mergesort(a,mid+1,j); //right recursion
    str_merge(a,i,mid,mid+1,j); //merging of two sorted sub-arrays
    }
}

void str_merge(char a[],int i1,int j1,int i2,int j2)
{
char temp[50]; //array used for merging
int i,j,k;
i=i1; //beginning of the first list
j=i2; //beginning of the second list
k=0;
while(i<=j1 && j<=j2) //while elements in both lists
{
    if(a[i]<a[j])
    {
      strcpy(temp[k++],a[i++]);
        for (int h = 0; h <= length_str_array+1; h++)
        printf(" %s ",str_array[h]);
        printf("\n");
    }
    else
    {
    strcpy(temp[k++],a[j++]);
            for (int h = 0; h <= length_str_array+1; h++)
        printf(" %s ",str_array[h]);
        printf("\n");

    }
}
while(i<=j1) //copy remaining elements of the first list
{
  strcpy(temp[k++],a[i++]);
          for (int h = 0; h <= length_str_array+1; h++)
        printf(" %s ",str_array[h]);
        printf("\n");

}
while(j<=j2) //copy remaining elements of the second list
{
  strcpy(temp[k++],a[j++]);
          for (int h = 0; h <= length_str_array+1; h++)
        printf(" %s ",str_array[h]);
        printf("\n");

}
//Transfer elements from temp[] back to a[]
for(i=i1,j=0;i<=j2;i++,j++)
strcpy(a[i],temp[j]);
}