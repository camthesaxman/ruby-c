int __fastcall sub_812F8DC(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  __int16 v3; // r0@2
  __int16 v4; // r1@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 8 * ++*(_WORD *)(a1 + 46) & 0xFF;
  sub_812F86C(a1);
  *(_WORD *)(v1 + 38) = sine(v2, 8);
  if ( (signed int)*(_WORD *)(v1 + 46) > 58 )
  {
    v3 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 1 )
    {
      *(_WORD *)(v1 + 48) = 0;
      v4 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v4;
      *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (v4 & 1);
      if ( (signed int)*(_WORD *)(v1 + 50) > 3 )
        move_anim_8074EE0(v1);
    }
  }
  return v6;
}
