int __fastcall sub_80CD2D4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 30 )
  {
    *(_WORD *)(v1 + 38) = (30 - *(_WORD *)(v1 + 46)) / 3;
    *(_WORD *)(v1 + 36) = sine((signed __int16)(4 * *(_WORD *)(v1 + 48)), 3);
    ++*(_WORD *)(v1 + 48);
  }
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    move_anim_8072740(v1);
  return v4;
}
