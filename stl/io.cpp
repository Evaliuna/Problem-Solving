#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;//mod is used to avoid integer overflow, it is a prime number, so that the hash function can be used to avoid collisions in unordered_map and unordered_set

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);//this line is used to speed up the input and output operations, it disables the synchronization between the C and C++ standard streams, so that the C++ streams are not flushed automatically when the C streams are flushed, and it unties cin from cout, so that cin does not wait for cout to flush before reading input, this can improve the performance of input and output operations significantly, especially when there are a lot of input and output operations in the program

    freopen("speed in", "r", stdin);//this line is used to redirect the input from the file "speed in" to the standard input stream, so that the input can be read from the file instead of the console, this is useful when testing the program with large input files, and it can also be used to redirect the output to a file instead of the console by using freopen("speed out", "w", stdout);
    freopen("speed out", "w", stdout);//this line is used to redirect the output from the standard output stream to the file "speed out", so that the output can be written to the file instead of the console, this is useful when testing the program with large output files, and it can also be used to redirect the input from a file instead of the console by using freopen("speed in", "r", stdin);
    //\n is used to print a new line, it is faster than endl because endl flushes the output buffer, which can slow down the output operations significantly, especially when there are a lot of output operations in the program, so it is recommended to use \n instead of endl for printing new lines in competitive programming and other performance-critical applications.
    scanf("%d", &n);//scanf is used to read input from the standard input stream, it is faster than cin because it does not perform any type checking or formatting, and it can read multiple inputs in a single call, so it is recommended to use scanf instead of cin for reading input in competitive programming and other performance-critical applications.
    printf("%d\n", n);//printf is used to write output to the standard output stream, it is faster than cout because it does not perform any type checking or formatting, and it can write multiple outputs in a single call, so it is recommended to use printf instead of cout for writing output in competitive programming and other performance-critical applications.

    ifstream fin("speed in");//ifstream is used to read input from a file, it is slower than scanf because it performs type checking and formatting, and it can read only one input at a time, so it is not recommended to use ifstream for reading input in competitive programming and other performance-critical applications.
    ifstream fout("speed out");//ofstream is used to write output to a file, it is slower than printf because it performs type checking and formatting, and it can write only one output at a time, so it is not recommended to use ofstream for writing output in competitive programming and other performance-critical applications.

}