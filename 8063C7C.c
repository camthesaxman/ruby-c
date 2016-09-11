int __fastcall IsZCoordMismatchAt(unsigned __int8 a1, __int16 a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@1
  int v5; // r0@2
  int result; // r0@5

  v3 = a1;
  v4 = a3 << 16;
  result = 0;
  if ( a1 )
  {
    v5 = (unsigned __int8)MapGridGetZCoordAt(a2, SHIWORD(v4));
    if ( v5 )
    {
      if ( v5 != 15 && v5 != v3 )
        result = 1;
    }
  }
  return result;
}
