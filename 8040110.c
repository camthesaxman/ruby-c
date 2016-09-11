int __fastcall sub_8040110(int a1, unsigned __int8 a2)
{
  int v2; // r7@1
  unsigned int v3; // r4@1
  int v4; // r3@1
  signed int v5; // r6@1
  int v6; // r5@1
  int v7; // ST00_4@3
  char v8; // r0@3

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 1;
  v6 = 0;
  if ( a2 )
  {
    do
    {
      if ( v3 & 1 )
      {
        v7 = v4;
        v8 = GetMonData(v2 + 100 * v4, 34, 0);
        v4 = v7;
        if ( v8 & 0xF )
          v6 = (v6 | v5) & 0xFF;
      }
      ++v4;
      v5 *= 2;
      v3 >>= 1;
    }
    while ( v3 );
  }
  else if ( GetMonData(a1, 34, 0) & 0xF )
  {
    v6 = 1;
  }
  return v6;
}
