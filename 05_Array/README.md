# Arrays

An array is a collection of similar data types. Logically array is represented below, and each element has an index associated with it.



Array elements can be assessed using the index.
# 1D Arrays
##### Declare and initialize array

    int array1[5] = {19, 10, 8, 17, 9}; // declare and initialize array
    int array2[] = {19, 10, 8, 17, 9}; // declare and initialize array
    int array3[5] = {19, 10, 8}; // declare and initialize array

# 2D Array

##### Declare and initialize array
    int matrix[4][2] = {{2, 3}, {4, 5}, {1, 6}, {7, 8}}; //2D array with 4 rows and 2 columns

# Passing Array to Function
````
int sum(int[], int);
int main()
{
int arr[] = {10, 11, 12, 13};
int size = sizeof(arr)/sizeof(int);
cout << "sum of elements is " << sum(arr,size) << endl;
return 0;
}

int sum(int temp[], int s)
{
    int sum = 0;
    for(int i=0; i<s; i++)
        sum += temp[i];
    return sum;
}
````
