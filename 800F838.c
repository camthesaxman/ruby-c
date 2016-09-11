int __fastcall sub_800F838(int a1)
{
  int v1; // r3@1
  signed int v2; // r1@1
  int v3; // r0@8
  int v4; // r1@9
  _WORD *v5; // r0@9
  _WORD *v6; // r2@9
  signed int v7; // r1@9
  __int16 v8; // r0@11
  __int16 v9; // r0@13
  int v11; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
_0800F86C:
    v3 = *(_WORD *)(a1 + 54) - 1;
    *(_WORD *)(v1 + 54) = v3;
    if ( !(v3 << 16) )
    {
      *(_WORD *)(v1 + 54) = 2;
      v4 = 32 * *(_WORD *)(v1 + 52);
      v5 = (_WORD *)(2 * (*(_WORD *)(v1 + 50) - v4) + 0x2000000);
      v6 = (_WORD *)(2 * (*(_WORD *)(v1 + 48) + v4) + 0x2000000);
      v7 = 28;
      do
      {
        *v6 = 61;
        *v5 = 61;
        v5 += 2;
        v6 += 2;
        v7 -= 2;
      }
      while ( v7 >= 0 );
      v8 = *(_WORD *)(v1 + 52) + 1;
      *(_WORD *)(v1 + 52) = v8;
      if ( v8 == 21 )
      {
        ++*(_WORD *)(v1 + 46);
        *(_WORD *)(v1 + 48) = 32;
      }
    }
    return v11;
  }
  if ( v2 <= 1 )
  {
    if ( *(_WORD *)(a1 + 46) )
      return v11;
    ++*(_WORD *)(a1 + 46);
    *(_WORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 50) = 641;
    *(_WORD *)(a1 + 52) = 0;
    *(_WORD *)(a1 + 54) = 1;
    goto _0800F86C;
  }
  if ( v2 == 2 )
  {
    v9 = *(_WORD *)(a1 + 48) - 1;
    *(_WORD *)(v1 + 48) = v9;
    if ( v9 == 20 )
      SetMainCallback2((int)sub_800E7C4);
  }
  return v11;
}
