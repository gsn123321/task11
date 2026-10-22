#include <iostream>

void func(int* arr, int size, int* sum, int* nums) {
    *sum = 0;
    *nums = 1;
    for (int i = 0; i < size; ++i) {
        *sum += arr[i];
        *nums *= arr[i];
    }
}

void func(int* arr, int size, int* neg, int* pos, int* zero) {
    *neg = 0;
    *pos = 0;
    *zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            (*neg)++;
        }
        else if (arr[i] > 0) {
            (*pos)++;
        }
        else {
            (*zero)++;
        }
    }
}

int* func(int* A, int sizeA, int* B, int sizeB) {
    for (int i = 0; i <= sizeA - sizeB; ++i) {
        int j ;
        for (j = 0; j < sizeB; ++j) {
            if (A[i + j] != B[j]) {
                break;
            }
        }

        if (j == sizeB) {
            return &A[i];
        }
    }

    return 0;
}


int main()
{
    //int a, b;
    //std::cin >> a >> b;

    //int* p1 = &a;
    //int* p2 = &b;

    //if (*p1 > *p2) {
    //    std::cout << *p1;
    //}
    //else {
    //    std::cout << *p2;
    //}

    //2
    //int a, b;
    //std::cin >> a >> b;

    //int* p1 = &a;
    //int* p2 = &b;

    //int temp = *p1;
    //*p1 = *p2;
    //*p2 = temp;

    //std::cout << a << " " << b;

    //3

    //int arr[5] = { 1, 2, 3, 4 ,5 };
    //int sum, nums;

    //func(arr, 5, &sum, &nums);

    //std::cout << sum << ' ' << nums;

    //4

    //int arr[6] = { -2, 5, 0, -4, 3, 0 };
    //int neg, pos, zero;

    //func(arr, 6, &neg, &pos, &zero);

    //std::cout << neg << "; " << pos << "; " << zero;

    //5

    int A[6] = { 1, 2, 3, 4, 5, 6 };
    int B[3] = { 3, 4, 5 };

    int* p = func(A, 6, B, 3);

    if (p != 0) {
        std::cout << "Found: ";

        for (int i = 0; i < 3; i++) {
            std::cout << p[i] << " ";
        }
    }
    else {
        std::cout << "No";
    }
}

