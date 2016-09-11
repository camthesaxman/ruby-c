int __fastcall sub_8128800(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 63) & 0x10 )
    FieldEffectStop(a1, *(_BYTE *)(a1 + 46));
  else
    sub_806487C(a1, 0);
  return v2;
}
