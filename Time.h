#include <iostream>
using namespace std;

void getTime(int &h, int &m) { cin >> h >> m; }

int subtract(int h1, int m1, int h2, int m2) {
  int h3 = h2 - h1;
  if (h3 < 0)
    h3 += 24;
  int m3 = m2 - m1;
  if (m3 < 0) {
    h3 -= 1;
  }
  return h3;
}

int subtract(int m1, int m2) {
  int m3 = m2 - m1;
  if (m3 < 0) {
    m3 = m3 + 60;
  }
  return m3;
}