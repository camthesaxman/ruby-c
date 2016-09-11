int __fastcall sub_80D2094(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  signed int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 50);
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 38) = -((unsigned int)(v2 << 16) >> 24);
  *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 52), 4);
  *(_WORD *)(v1 + 52) = (*(_WORD *)(v1 + 52) + 3) & 0xFF;
  v3 = (signed __int16)(*(_WORD *)(v1 + 38) + *(_WORD *)(v1 + 34));
  if ( v3 <= 72 )
  {
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (*(_WORD *)(v1 + 52) % 2 & 1);
    if ( v3 <= 64 )
      move_anim_8072740(v1);
  }
  return v5;
}
