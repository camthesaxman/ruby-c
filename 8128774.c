int __fastcall sub_8128774(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@5
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
    goto LABEL_10;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    *(_BYTE *)(a1 + 62) |= 4u;
    ++*(_WORD *)(a1 + 46);
  }
  if ( *(_WORD *)(a1 + 46) )
  {
LABEL_10:
    v2 = *(_WORD *)(a1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v2;
    if ( v2 > 34 )
      FieldEffectStop(v1, 0x36u);
  }
  return v4;
}
