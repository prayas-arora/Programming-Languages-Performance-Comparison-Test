# Programming-Languages-Performance-Comparison-Test

The project involves performance comparison of the following three languages:
(1) Python
(2) C
(3) C++

The test involves creation of files of sizes : 1gb, 2gb, 3gb, 4gb and 5gb using python.
Followed by copying each one of them into another file.

The snapshots of time taken for execution are present in the repository.
Here, the results were completely different than what one would expect.
Python performed the best followed by c++ and c in order.
This happened largely because of difference in coding techniques.
The code in Python was reading the entire file in a go and then appending it to the other, whereas the codes written in C and C++ copied the contents of the source file character by character and appended to the target file.

Thus, code writing techniques and logics behind the code are far more important than the language a person uses.

NOTE:
This test was performed on a machine with high specifications.The results may differ on your machine. 
