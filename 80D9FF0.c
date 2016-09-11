int __fastcall sub_80D9FF0(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = (*(_WORD *)(a1 + 46) + 11) & 0xFF;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 46), 4);
  v2 = *(_WORD *)(v1 + 48) + 48;
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 38) = -(v2 << 16 >> 24);
  if ( *(_BYTE *)(v1 + 63) & 0x20 )
    move_anim_8072740(v1);
  return v4;
}
