signed int __fastcall sub_805CAAC(__int16 a1, __int16 a2, int a3, int a4)
{
  signed int v4; // r2@2

  if ( a3 << 16 <= a4 << 16 )
  {
    v4 = 1;
    if ( a2 & 0x8000 )
      v4 = 2;
  }
  else
  {
    v4 = 4;
    if ( a1 & 0x8000 )
      v4 = 3;
  }
  return v4;
}
