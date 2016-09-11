signed int __fastcall sub_808E208(char a1, unsigned __int8 a2, char a3)
{
  unsigned int v3; // r3@6
  int v4; // r0@7
  unsigned int v5; // r3@11
  int v6; // r0@12
  signed int result; // r0@2

  if ( *(_BYTE *)(v202FFB4 + 1582) )
  {
    --*(_BYTE *)(v202FFB4 + 1582);
    if ( a1 == 1 )
    {
      v3 = 0;
      do
      {
        v4 = *(_WORD *)(v202FFB4 + 1566 + 2 * v3);
        if ( v4 != 0xFFFF )
          *(_WORD *)&gSprites[68 * v4 + 56] += a2;
        v3 = (v3 + 1) & 0xFFFF;
      }
      while ( v3 <= 3 );
      v400001A = 16 * *(_WORD *)(v202FFB4 + 1586)
               + *(_BYTE *)(v202FFB4 + 1581)
               - (unsigned __int8)(16 * ((unsigned __int8)a3 - *(_BYTE *)(v202FFB4 + 1582)) / (unsigned __int8)a3);
      *(_BYTE *)(v202FFB4 + 1580) -= *(_BYTE *)(v202FFB4 + 1576);
    }
    else if ( a1 == 2 )
    {
      v5 = 0;
      do
      {
        v6 = *(_WORD *)(v202FFB4 + 1566 + 2 * v5);
        if ( v6 != 0xFFFF )
          *(_WORD *)&gSprites[68 * v6 + 56] -= a2;
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 <= 3 );
      v400001A = 16 * *(_WORD *)(v202FFB4 + 1586)
               + *(_BYTE *)(v202FFB4 + 1581)
               + (unsigned __int8)(16 * ((unsigned __int8)a3 - *(_BYTE *)(v202FFB4 + 1582)) / (unsigned __int8)a3);
      *(_BYTE *)(v202FFB4 + 1580) += *(_BYTE *)(v202FFB4 + 1576);
    }
    result = 0;
  }
  else
  {
    v400001A = 16 * *(_WORD *)(v202FFB4 + 1584) + *(_BYTE *)(v202FFB4 + 1581);
    result = 1;
  }
  return result;
}
