#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAAAAAAAAAAAAAA, _bBBBBBBBBBBBBBBBB, _xXXXXXXXXXXXXXXXX, _yYYYYYYYYYYYYYYYY;
   printf("Enter _aAAAAAAAAAAAAAAAA:");
   scanf("%d", &_aAAAAAAAAAAAAAAAA);
   printf("Enter _bBBBBBBBBBBBBBBBB:");
   scanf("%d", &_bBBBBBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAAAAAA + _bBBBBBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAAAAAA - _bBBBBBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAAAAAA * _bBBBBBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAAAAAA / _bBBBBBBBBBBBBBBBB);
   printf("%d\n", _aAAAAAAAAAAAAAAAA % _bBBBBBBBBBBBBBBBB);
   _xXXXXXXXXXXXXXXXX = (_aAAAAAAAAAAAAAAAA - _bBBBBBBBBBBBBBBBB) * 10 + (_aAAAAAAAAAAAAAAAA + _bBBBBBBBBBBBBBBBB) / 10;
   _yYYYYYYYYYYYYYYYY = _xXXXXXXXXXXXXXXXX + (_xXXXXXXXXXXXXXXXX % 10);
   printf("%d\n", _xXXXXXXXXXXXXXXXX);
   printf("%d\n", _yYYYYYYYYYYYYYYYY);
   system("pause");
    return 0;
}
