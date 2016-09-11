int __fastcall sub_8105EB4(int a1)
{
  int v1; // r3@1
  signed int v2; // r0@1
  __int16 v3; // r0@8
  int v4; // r1@11
  int v5; // r1@11
  __int16 v6; // r0@11
  int v8; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
_08105EE2:
    v3 = *(_WORD *)(v1 + 34) + 8;
    *(_WORD *)(v1 + 34) = v3;
    if ( v3 > 111 )
    {
      *(_WORD *)(v1 + 34) = 112;
      *(_WORD *)(v1 + 48) = 16;
      ++*(_WORD *)(v1 + 46);
    }
    return v8;
  }
  if ( v2 <= 1 )
  {
    if ( v2 )
      return v8;
    *(_BYTE *)(v1 + 44) |= 0x40u;
    ++*(_WORD *)(v1 + 46);
    goto _08105EE2;
  }
  if ( v2 == 2 )
  {
    if ( !*(_WORD *)(v1 + 50) )
    {
      v4 = *(_WORD *)(v1 + 48);
      *(_WORD *)(v1 + 34) -= v4;
      v5 = -v4;
      *(_WORD *)(v1 + 48) = v5;
      v6 = *(_WORD *)(v1 + 52) + 1;
      *(_WORD *)(v1 + 52) = v6;
      if ( v6 > 1 )
      {
        *(_WORD *)(v1 + 48) = v5 << 16 >> 18;
        *(_WORD *)(v1 + 52) = 0;
        if ( !(v5 << 16 >> 18) )
        {
          ++*(_WORD *)(v1 + 46);
          *(_WORD *)(v1 + 60) = 0;
          *(_BYTE *)(v1 + 44) &= 0xBFu;
        }
      }
    }
    *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) + 1) & 7;
  }
  return v8;
}
