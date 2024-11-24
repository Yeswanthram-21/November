c++

24/11/2024

#include <iostream>
using namespace std;
int main ()
{
    for (int n = 1; n <= 10; ++n)
    {
      cout << n << endl;
    }
    return 1;
}

Output:
1
2
3
4
5
6
7
8
9
10

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter number:" << endl;
    cin >> n;
    cout << endl;

    while (i <= n)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}

Enter number:5
1
2
3
4
5

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter number:" << endl;
    cin >> n;
    cout << endl;
    do
    {
        cout << i << endl;
        i++;
    }
    while (i <= n);
    return 0;
}

Enter number
3

1
2
3

#include <iostream>
using namespace std;
int main()
{
    int num_of_items;
    cout <<"enter the number of items you want to insert in an array" << endl;
    cin >> num_of_items;
    int items[num_of_items];
    cout <<"enter the elements you want to insert" << endl;

    for(int i = 0; i < num_of_items; i++)
    {
        cin >> items[i];
    }
    int key;
    cout <<"enter the element you want to search" << endl;
    cin >> key;
    for(int i:items)
    {
        if(i == key)
        {
            cout <<"element found" << endl;
            return 0;
        }
    }
    cout <<"element not found" << endl;
    return 0;
}

enter the number of items you want to insert in an array
4
enter the elements you want to insert
1 2 4 5
enter the element you want to search
3
element not found

#include <iostream>
using namespace std;
int main()
{
    int n, max = 0;
    cout <<"Enter size of the array: ";
    cin >> n;
    int A[n];
    cout <<"Enter elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if(i >= 1 && A[i] > max)
        {
              max = A[i];
        }
    }
    cout <<"Max element : " << max << endl;
}
Enter size of the array: 5
Enter elements of the array:
3 4 5 6 7
Max element : 7


#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    return 0;
}

10
0x7ffd3504c38c
0x7ffd3504c38c
0x7ffd3504c380
10

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "MADAM";
    string rev = "";
    int len = (int) str.length ();
    rev.resize (len);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';

    cout << "String '" << str << "' is ";

    if (str.compare (rev) == 0)
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}

String 'MADAM' is Palindrome

#include <iostream>
using namespace std;
void Swap(int a, int b)
{
    cout << "Before Swapping:" << endl;
    cout << "a: " << a << " b: " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping:" << endl;
    cout << "a: " << a << " b: " << b << endl;
}

int main ()
{
    int x = 10, y = 20;
    swap (x, y);
    cout << "x: " << x << " y: " << y << endl;
}

x: 20 y: 10

#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;

        int Area ()
        {
            return length * breadth;
        }
        int Perimeter ()
        {
            return 2 * (length + breadth);
        }
};

int main()
{
    Rectangle r1, r2;
    r1.length = 10;
    r1.breadth = 9;
    r2.length = 3;
    r2.breadth = 3;

    cout << "r1:" << endl;
    cout << "length: " << r1.length << " breadth: " << r1.breadth << endl;
    cout << "r2:" << endl;
    cout << "length: " << r2.length << " breadth: " << r2.breadth << endl;

    cout << "Area of r1: " << r1.Area () << endl;
    cout << "Perimeter of r1: " << r1.Perimeter () << endl << endl;
    cout << "Area of r2: " << r2.Area () << endl;
    cout << "Perimeter of r2: " << r2.Perimeter () << endl;
}

r1:
length: 10 breadth: 9
r2:
length: 3 breadth: 3
Area of r1: 90
Perimeter of r1: 38

Area of r2: 9
Perimeter of r2: 12

#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int Area ()
    {
        return length * breadth;
    }
    int Perimeter ()
    {
        return 2 * (length + breadth);
    }
};
class Cuboid:public Rectangle
{
public:
    int height;
    Cuboid (int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    int Volume ()
    {
        return length * breadth * height;
    }
};
int main()
{
    Cuboid c (2, 4, 6);
    cout << "Volume is " << c.Volume () << endl;
    cout << "Area is " << c.Area () << endl;
    cout << "Perimeter is " << c.Perimeter () << endl;
}

Volume is 48
Area is 8
Perimeter is 12



