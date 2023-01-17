# divide-and-conquer
 An example of a divide and conquer algorithm written in C for finding the maximum element in an array.


In this algorithm, the findMax function takes an array, a start index, and an end index as input. It uses a divide and conquer approach to find the maximum element in the array. The function starts by checking if the start index is equal to the end index, in which case the element at that index is returned. If the start index is not equal to the end index, the function finds the middle index, calls itself recursively to find the maximum element in the left half of the array, and finds the maximum element in the right half of the array. Finally, it returns the maximum of the two maximum elements found in the left and right halves of the array.
