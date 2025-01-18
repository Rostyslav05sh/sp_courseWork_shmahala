#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAAAAAAAAAAAAAA, _bBBBBBBBBBBBBBBBB, _cCCCCCCCCCCCCCCCC;
   printf("Enter _aAAAAAAAAAAAAAAAA:");
   scanf("%d", &_aAAAAAAAAAAAAAAAA);
   printf("Enter _bBBBBBBBBBBBBBBBB:");
   scanf("%d", &_bBBBBBBBBBBBBBBBB);
   printf("Enter _cCCCCCCCCCCCCCCCC:");
   scanf("%d", &_cCCCCCCCCCCCCCCCC);
   if ((_aAAAAAAAAAAAAAAAA > _bBBBBBBBBBBBBBBBB))
   {
   if ((_aAAAAAAAAAAAAAAAA > _cCCCCCCCCCCCCCCCC))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _cCCCCCCCCCCCCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", _aAAAAAAAAAAAAAAAA);
   goto Outofif;
   }
   }
   if ((_bBBBBBBBBBBBBBBBB < _cCCCCCCCCCCCCCCCC))
   {
   printf("%d\n", _cCCCCCCCCCCCCCCCC);
   }
   else
   {
   printf("%d\n", _bBBBBBBBBBBBBBBBB);
   }
Outofif:
   if (((_aAAAAAAAAAAAAAAAA == _bBBBBBBBBBBBBBBBB) && (_aAAAAAAAAAAAAAAAA == _cCCCCCCCCCCCCCCCC) && (_bBBBBBBBBBBBBBBBB == _cCCCCCCCCCCCCCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aAAAAAAAAAAAAAAAA < 0) || (_bBBBBBBBBBBBBBBBB < 0) || (_cCCCCCCCCCCCCCCCC < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_aAAAAAAAAAAAAAAAA < (_bBBBBBBBBBBBBBBBB + _cCCCCCCCCCCCCCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
