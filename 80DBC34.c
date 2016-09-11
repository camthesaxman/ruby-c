int __fastcall sub_80DBC34(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@6
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = *(_WORD *)(v1 + 48) - 1;
      *(_WORD *)(v1 + 48) = v3;
      if ( v3 == -1 )
        move_anim_8072740(v1);
    }
  }
  else if ( *(_BYTE *)(v1 + 63) & 0x20 )
  {
    FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
    *(_BYTE *)(v1 + 1) &= 0xFCu;
    *(_WORD *)(v1 + 48) = 18;
    ++*(_WORD *)(v1 + 46);
  }
  return v5;
}
