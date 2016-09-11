int __fastcall sub_80D9C40(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x20 )
  {
    *(_WORD *)(a1 + 48) = (*(_WORD *)(a1 + 48) + 40) & 0xFF;
    *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 48), 2);
    v2 = *(_WORD *)(v1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v2;
    if ( v2 > 40 )
      move_anim_8072740(v1);
  }
  return v4;
}
