int sub_807DA4C()
{
  char v0; // r0@8
  int v1; // r2@10
  int v3; // [sp+10h] [bp-4h]@0

  if ( v202FF2A == 1 )
  {
    v202FF28 = (v202FF28 + 3) & 0x7F;
    v1 = ((gSineTable[v202FF28] - 1) >> 6) + 2;
    v202FF24 = ((gSineTable[v202FF28] - 1) >> 6) + 2;
    if ( v1 != v202FF26 )
      sub_807DA04(v1);
    v202FF26 = v202FF24;
  }
  else if ( v202FF2A > 1 )
  {
    if ( v202FF2A == 2 )
    {
      ++v202FF28;
      if ( v202FF28 > (signed int)v202FF58 )
      {
        v202FF28 = 0;
        --v202FF24;
        sub_807DA04(v202FF24);
        if ( v202FF24 == 3 )
          v202FF2A = 0;
      }
    }
  }
  else if ( !v202FF2A )
  {
    ++v202FF28;
    if ( v202FF28 > (signed int)v202FF58 )
    {
      v202FF28 = v202FF2A;
      v0 = v202FF24;
      ++v202FF24;
      sub_807DA04(v0);
      if ( v202FF24 > 5 )
      {
        v202FF26 = v202FF24;
        v202FF2A = 1;
        v202FF28 = 60;
      }
    }
  }
  return v3;
}
