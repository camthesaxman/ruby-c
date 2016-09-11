int __fastcall sub_80DB578(int a1)
{
  int v1; // r3@1
  int v2; // r1@1
  __int16 v3; // r0@4
  __int16 v4; // r0@5
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( v2 == 1 )
      move_anim_8072740(a1);
  }
  else
  {
    v3 = *(_WORD *)(a1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 8 )
    {
      *(_WORD *)(v1 + 48) = v2;
      *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
      v4 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v4;
      if ( v4 > 5 )
      {
        if ( *(_BYTE *)(v1 + 62) & 4 )
          ++*(_WORD *)(v1 + 46);
      }
    }
  }
  return v6;
}
