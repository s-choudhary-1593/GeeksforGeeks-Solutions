int findMean(int* arr, int size) {
    int sum = 0;

    // Loop through the array and add each element to the sum
    for (int i = 0; i < size; i++)
        sum += arr[i];

    // Calculate the mean by dividing the sum by n
    int ans = sum / size;

    return ans;
}