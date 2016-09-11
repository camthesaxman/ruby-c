int __fastcall sub_81275C4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(a1 + 62) << 29 >> 31) ^ 1);
  ++*(_WORD *)(a1 + 48);
  sub_806487C(a1, (unsigned int)*(_BYTE *)(a1 + 62) << 29 >> 31);
  if ( (signed int)*(_WORD *)(v1 + 48) > 56 )
    FieldEffectStop(v1, *(_BYTE *)(v1 + 60));
  return v3;
}
