int __fastcall sub_8128410(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (*(_WORD *)(a1 + 46) + 128) & 0x100;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 34) -= v2 << 16 >> 24;
  sub_806487C(v1, 0);
  if ( *(_WORD *)(v1 + 62) & 0x1004 )
    FieldEffectStop(v1, 0x35u);
  return v4;
}
