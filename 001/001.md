**Challenge**

  

Consider a grid, with some cells empty and others containing an asterisk. Define two asterisks to be contiguous if they are adjacent to each other in the same row or in the same column. They are also considered as contiguous if they are next to each other diagonally. Now suppose that we define a blob as follows:

  

- A blob contains at least one asterisk

- If an asterisk is in a blob, then so is any asterisk that is contiguous to it.

- If a blob has more than two asterisks, then each asterisk in it is contiguous to at least one other asterisk in the blob.

* 3x11 grid with 4 blobs 

| *|  |  | *| *|  |  | *|  | *| *|
|--|--|--|--|--|--|--|--|--|--|--|
|  |  |  |  |  |  |  | *|  | *| *|
|  |  |  |  |  |  |  |  |  |  |  |

* 3x10 grid with 1 blob

|  | *| *| *|  | *| *| *|  |  |
|--|--|--|--|--|--|--|--|--|--|
|  |  |  | *|  | *|  | *|  |  |
|  |  |  | *| *| *|  |  |  |  |

* 4x12 grid with 5 blobs

|  |  |  |  |  |  |  |  |  |  |  |  |
|--|--|--|--|--|--|--|--|--|--|--|--|
| *|  | *|  | *|  |  |  | *| *| *|  |
|  |  |  |  |  | *|  |  |  | *|  |  |
| *|  |  |  | *|  |  |  |  |  |  |  |


Write a C program that reads the square grid from the user. First, reads number of rows, number of columns and then reads the grid. Compute and prints the number of blobs in the grid and number of asterisks in each blob in increasing order. For example, the input and output of your program for the grid given in the above 4x12 grid example will be as follows. The first two values entered represent the dimensions of the grid. The next pairs of values indicate the locations of the asterisks on the grid. Indices in the grid start from 0.

  
  
  

|**Input:** |**Output:** |
|--|--|
|4 12 <br> 1 0 <br> 1 2 <br> 1 4 <br> 1 8 <br> 1 9 <br> 1 10 <br> 2 5 <br> 2 9 <br> 3 0 <br> 3 4 <br> -1 |5 1 1 1 3 4 |
