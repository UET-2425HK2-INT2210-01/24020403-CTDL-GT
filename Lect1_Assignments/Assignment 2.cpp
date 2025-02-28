#include <iostream>
using namespace std;

class Point {
    public:
      double x, y;

      void import() {
           cin >> x >> y;
      }

};

class Line {
    public:
        //y=ax+b
        double a,b;
        Line (Point P1, Point P2){
             a = (P1.y - P2.y) / (P1.x - P2.x);
             b = P1.y - a * P1.x;
        }
};

 void findIntersectionOfLines(Line L1,Line L2){
     if(L1.a == L2.a && L1.b == L2.b) {
         cout << "MANY" << endl;
     }
     else if(L1.a == L2.a && L1.b != L2.b){
         cout << "NO" << endl;
     }
    else {
        double xi, yi;
        xi = (L2.b - L1.b) / (L1.a - L2.a);
        yi = xi * L1.a + L1.b;
        cout << xi <<" "<< yi << endl;
    }
 }


int main() {
    Point A, B, C, D;
    A.import();
    B.import();
    C.import();
    D.import();

    Line AB (A, B);
    Line CD (C, D);


    findIntersectionOfLines (AB, CD);
    return 0;
}
