int __fastcall GetMessageBoxTilemapEntry(unsigned __int16 a1, unsigned __int8 a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  unsigned int v5; // r5@1
  signed int v6; // r1@1

  v5 = a2;
  a3 = (unsigned __int8)a3;
  a4 = (unsigned __int8)a4;
  v6 = 9;
  if ( (unsigned __int8)a3 < (unsigned int)a5 )
  {
    if ( a3 > 1 )
      a3 = 2;
  }
  else
  {
    a3 = (a3 - a5 + 3) & 0xFF;
  }
  if ( (signed int)v5 < a4 + 2 )
  {
    if ( v5 > 2 )
      v5 = 3;
  }
  else
  {
    v5 = (v5 - (a4 + 2) + 4) & 0xFF;
  }
  if ( v5 <= 6 && a3 <= 4 )
    v6 = gMessageBoxTilemap[7 * a3 + v5];
  return (v6 + a1) & 0xFFFF;
}
