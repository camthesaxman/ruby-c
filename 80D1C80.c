int __fastcall sub_80D1C80(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v3; // r2@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 1 )
    sub_80787B0(v1, 0);
  *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 48), 8);
  v3 = *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 38) = v3 << 16 >> 24;
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 7) & 0xFF;
  *(_WORD *)(v1 + 50) = v3 - 128;
  if ( *(_WORD *)(v1 + 46) == 60 )
    move_anim_8072740(v1);
  return v5;
}
