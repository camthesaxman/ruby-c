int __fastcall sub_80E11D4(int a1)
{
  int v1; // r3@1
  int v2; // r1@1
  __int16 v3; // r0@4
  int v4; // r0@6
  __int16 v5; // r0@7
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( v2 == 1 )
    {
      v4 = *(_WORD *)(a1 + 48) + 1;
      *(_WORD *)(v1 + 48) = v4;
      if ( v4 << 16 > 0 )
      {
        *(_WORD *)(v1 + 48) = 0;
        *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
        v5 = *(_WORD *)(v1 + 50) + 1;
        *(_WORD *)(v1 + 50) = v5;
        if ( v5 == 10 )
          move_anim_8072740(v1);
      }
    }
  }
  else
  {
    v3 = *(_WORD *)(a1 + 38) + 4;
    *(_WORD *)(v1 + 38) = v3;
    if ( !(v3 & 0x8000) )
    {
      *(_WORD *)(v1 + 38) = v2;
      ++*(_WORD *)(v1 + 46);
    }
  }
  return v7;
}
