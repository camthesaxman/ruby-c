int __fastcall sub_8053538(unsigned __int8 a1)
{
  int v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = sub_80FA8CC(a1);
  if ( v1 )
    warp1_set(*(_BYTE *)v1, *(_BYTE *)(v1 + 1), -1, *(_BYTE *)(v1 + 2), *(_BYTE *)(v1 + 4));
  return v3;
}
