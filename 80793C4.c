int __fastcall sub_80793C4(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( *(_BYTE *)(a1 + 63) & 0x30 )
      move_anim_8074EE0(a1);
  }
  else
  {
    v2 = 0;
    if ( !word_3004B06 )
      v2 = 1;
    if ( word_3004B04 )
      sub_8078764(a1, v2);
    else
      sub_80787B0(a1, v2);
    ++*(_WORD *)(v1 + 46);
  }
  return v4;
}
