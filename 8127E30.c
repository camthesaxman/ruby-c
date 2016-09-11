int __fastcall sub_8127E30(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_806487C(a1, 0);
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    FieldEffectStop(v1, 7u);
  return v3;
}
