int __fastcall sub_80CBDB0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) > 20 )
    move_anim_8072740(a1);
  *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * ((*(_WORD *)(v1 + 46))++ % 2 & 1);
  return v3;
}
