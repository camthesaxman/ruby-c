int __fastcall sub_80D2E68(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 48) = 120 - word_3004B00[0];
    *(_BYTE *)(a1 + 62) |= 4u;
  }
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == *(_WORD *)(v1 + 48) )
    sub_8079108(((unsigned int)*(_BYTE *)(v1 + 5) >> 4) + 16, 0);
  if ( *(_WORD *)(v1 + 46) == *(_WORD *)(v1 + 48) + 80 )
    move_anim_8072740(v1);
  return v4;
}
