int __fastcall sub_8090040(int a1)
{
  signed __int16 v1; // r1@2
  __int16 v3; // [sp+0h] [bp-8h]@4
  int v4; // [sp+4h] [bp-4h]@4

  if ( a1 << 24 )
    v1 = 914;
  else
    v1 = 687;
  v3 = v1;
  LoadPalette((int)&v3, 93, 2);
  return v4;
}
