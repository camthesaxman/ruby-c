int __fastcall sub_80CB9C4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + (unsigned int)(((signed int)*(_WORD *)(a1 + 52) << 7) / *(_WORD *)(a1 + 54));
  *(_WORD *)(a1 + 46) = v2;
  if ( v2 > 127 )
  {
    ++*(_WORD *)(a1 + 48);
    *(_WORD *)(a1 + 46) = 0;
  }
  *(_WORD *)(a1 + 38) = sine((signed __int16)(*(_WORD *)(a1 + 46) + 128), 30 - 8 * *(_WORD *)(a1 + 48));
  if ( sub_80CB814(v1) << 24 )
  {
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 46) = 0;
    move_anim_8072740(v1);
  }
  return v4;
}
