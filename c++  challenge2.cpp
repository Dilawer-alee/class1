            
            
//            Weekly Challenge 02: Loop Logic Mastery

//1. Right-Angled Triangle
//*
//**
//***
//****
//*****

//#include <iostream>
//using namespace std;
//
//int main() {
//    for (int i = 1; i <= 5; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//2. Inverted Right-Angled Triangle
//*****
//****
//***
//**
//*

//#include <iostream>
//using namespace std;
//
//int main() {
//    for (int i = 5; i >= 1; i--) {
//        for (int j = 1; j <= i; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//3. Full Pyramid
//*
//***
//*****
//*******
//*********

//#include <iostream>
//using namespace std;

//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//4. Inverted Pyramid
//*********
//*******
//*****
//***
//*

//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = rows; i >= 1; i--) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//5. Hollow Pyramid
//*
//* *
//* *
//* *
//*********

//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            if (k == 1 || k == 2 * i - 1 || i == rows) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//6. Diamond
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*


//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//
//    // Upper part of the diamond
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    // Lower part of the diamond
//    for (int i = rows - 1; i >= 1; i--) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//7. Square
//*****
//*****
//*****
//*****
//*****

//#include <iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//8. Hollow Square
//*****
//* *
//* *
//* *
//*****

//#include <iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            if (i == 1 || i == size || j == 1 || j == size) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//9. Diagonal Line
//*
//*
//*
//*
//*

//#include <iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            if (i == j) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//10. Opposite Diagonal
//*
//*
//*
//*
//*


//#include <iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            if (j == size - i + 1) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//11


//#include <iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            if (j == i || j == size - i + 1) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//12. Plus Sign
//*
//*
//* * * * *
//*
//*

//#include <iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            if (i == (size / 2) + 1 || j == (size / 2) + 1) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//13. Triangle with Borders
//*
//* *
//* *
//* *
//* * * * *

//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            if (j == 1 || j == i || i == rows) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//14. Zigzag Pattern
//* *
//* *
//*
//* *
//* *
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows; j++) {
//            if ((i + j) % 2 == 0) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//15. Sand Clock
//*********
//*******
//*****
//***
//*
//***
//*****
//*******
//*********
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//
//    // Upper part
//    for (int i = rows; i >= 1; i--) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    // Lower part
//    for (int i = 2; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//16. Vertical Bars
//* * * *
//* * * *
//* * * *
//* * * *
//* * * *
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5, cols = 4;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= cols; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//17. Hollow Triangle
//*
//* *
//* *
//* *
//*********
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            if (j == 1 || j == i || i == rows) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//18. Number Triangle
//1
//12
//123
//1234
//12345
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << j;
//        }
//        cout << endl;
//    }
//    return 0;
//}


//19. Inverted Number Triangle
//12345
//1234
//123
//12
//1
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = rows; i >= 1; i--) {
//        for (int j = 1; j <= i; j++) {
//            cout << j;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//20. Number Pyramid
//1
//121
//12321
//1234321
//123454321
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= i; k++) {
//            cout << k;
//        }
//        for (int l = i - 1; l >= 1; l--) {
//            cout << l;
//        }
//        cout << endl;
//    }
//    return 0;
//}


//21. Number Inverted Pyramid
//123454321
//1234321
//12321
//121
//1
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = rows; i >= 1; i--) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= i; k++) {
//            cout << k;
//        }
//        for (int l = i - 1; l >= 1; l--) {
//            cout << l;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//22. Repeated Numbers
//1
//22
//333
//4444
//55555
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << i;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//23. Numbers in Columns
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5, cols = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= cols; j++) {
//            cout << j << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//24. Floyd’s Triangle
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5, num = 1;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << num << " ";
//            num++;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//25. Pascal's Triangle
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5, coef = 1;
//    for (int i = 0; i < rows; i++) {
//        for (int space = 1; space <= rows - i; space++) {
//            cout << " ";
//        }
//        for (int j = 0; j <= i; j++) {
//            if (j == 0 || i == 0) {
//                coef = 1;
//            } else {
//                coef = coef * (i - j + 1) / j;
//            }
//            cout << coef << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//26. Alphabet Triangle
//A
//AB
//ABC
//ABCD
//ABCDE
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        char ch = 'A';
//        for (int j = 1; j <= i; j++) {
//            cout << ch;
//            ch++;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//27. Alphabet Pyramid
//A
//ABA
//ABCBA
//ABCDCBA
//ABCDEDCBA
//
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        char ch = 'A';
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= i; k++) {
//            cout << ch;
//            ch++;
//        }
//        ch -= 2;
//        for (int l = 1; l < i; l++) {
//            cout << ch;
//            ch--;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//28. Alternating Triangle
//1
//01
//101
//0101
//10101
//
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        int start = i % 2 == 0 ? 0 : 1;
//        for (int j = 1; j <= i; j++) {
//            cout << start;
//            start = 1 - start;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//29. Binary Pyramid
//1
//101
//10101
//1010101
//101010101
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << (k % 2 == 1 ? "1" : "0");
//        }
//        cout << endl;
//    }
//    return 0;
//}

//30. Zigzag with Numbers
//1 1
//2 2
//3 3
//4 4
//5
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows; j++) {
//            if (j == i || j == rows - i + 1) {
//                cout << i << " ";
//            } else {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//31. Number X Shape
//1 1
//2 2
//3
//4 4
//5 5
//
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows; j++) {
//            if (j == i || j == rows - i + 1) {
//                cout << i << " ";
//            } else {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//32. Reversed Triangle
//54321
//5432
//543
//54
//5
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = rows; i >= 1; i--) {
//        for (int j = i; j >= 1; j--) {
//            cout << j;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//33. Staggered Numbers
//1
//2 3
//4 5 6
//7 8 9 10
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5, num = 1;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << num++ << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


//34. Half-Diamond Numbers
//1
//12
//123
//1234
//12345
//1234
//123
//12
//1
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << j;
//        }
//        cout << endl;
//    }
//    for (int i = rows - 1; i >= 1; i--) {
//        for (int j = 1; j <= i; j++) {
//            cout << j;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//35. Triangle with Stars and Numbers
//1
//1*
//1*2
//1*2*
//1*2*3
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << j;
//            if (j != i) cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//36. Number Borders
//11111
//10001
//10001
//10001
//11111
//
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            if (i == 1 || i == size || j == 1 || j == size) {
//                cout << "1";
//            } else {
//                cout << "0";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
//

//37. Nested Loops
//1
//12
//123
//1234
//12345
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << j;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//38. Pyramid of Digits
//1
//222
//33333
//4444444
//555555555
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            cout << i;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//39. Inverted Triangle Numbers
//1
//21
//321
//4321
//54321
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = i; j >= 1; j--) {
//            cout << j;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//40. Spiral Matrix
//A spiral of numbers starting from the center and moving outward in a clockwise direction.
//7 8 9 10
//6 1 2 11
//5 4 3 12
//16 15 14 13

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void spiralMatrix(int n) {
//    vector<vector<int>> matrix(n, vector<int>(n));
//    int value = 1;
//    int top = 0, bottom = n - 1, left = 0, right = n - 1;
//
//    while (top <= bottom && left <= right) {
//        for (int i = left; i <= right; i++) {
//            matrix[top][i] = value++;
//        }
//        top++;
//        for (int i = top; i <= bottom; i++) {
//            matrix[i][right] = value++;
//        }
//        right--;
//        for (int i = right; i >= left; i--) {
//            matrix[bottom][i] = value++;
//        }
//        bottom--;
//        for (int i = bottom; i >= top; i--) {
//            matrix[i][left] = value++;
//        }
//        left++;
//    }
//
//    for (auto row : matrix) {
//        for (auto elem : row) {
//            cout << elem << " ";
//        }
//        cout << endl;
//    }
//}
//41. Number Pyramid with Gaps
//Print a pyramid of numbers where the gaps increase with each row.
//1
//2 3
//4 5
//6 7
//8 9
//Hint: Use conditional logic to print numbers only at the start or end of the row.
//int main() {
//    spiralMatrix(4);
//    return 0;
//}

//42. Diamond Spiral
//A diamond shape with numbers spiraling inward.
//1
//2 3
//4 5
//6 7
//8 9
//6 7
//4 5
//2 3
//1
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    int num = 1;
//
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= i; k++) {
//            cout << num << " ";
//            num++;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//43. Checkerboard Numbers with Conditions
//
//5
//
//Create a checkerboard pattern of alternating numbers where numbers restart at each row.
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1
//Hint: Use conditions to alternate between `1` and `0`.
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= i; k++) {
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//    for (int i = rows - 1; i >= 1; i--) {
//        for (int j = 1; j <= rows - i; j++) {
//            cout << " ";
//        }
//        for (int k = 1; k <= i; k++) {
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//44. Snake Pattern
//A snake-like zigzag pattern with numbers.
//1 2 3 4 5
//10 9 8 7 6
//11 12 13 14 15
//20 19 18 17 16
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows = 5;
//    for (int i = 1; i <= rows; i++) {
//        for (int j = 1; j <= rows; j++) {
//            cout << (i + j) % 2 << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


#include <iostream>
using namespace std;

//int main() {
//    int rows = 5, cols = 5;
//    int num = 1;
//
//    for (int i = 1; i <= rows; i++) {
//        if (i % 2 != 0) {
//            for (int j = 1; j <= cols; j++) {
//                cout << num++ << " ";
//            }
//        } else {
//            int end = num + cols - 1;
//            for (int j = 1; j <= cols; j++) {
//                cout << end-- << " ";
//            }
//            num += cols;
//        }
//        cout << endl;
//    }
//    return 0;
//}

