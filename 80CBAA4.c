int __fastcall sub_80CBAA4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    sub_8078764(a1, 0);
    *(_WORD *)(v1 + 48) = word_3004B04;
  }
  v2 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 38) = v2 * *(_WORD *)(v1 + 48);
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    move_anim_8072740(v1);
  return v4;
}
