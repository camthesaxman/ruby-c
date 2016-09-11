int __fastcall sub_808161C(int a1)
{
  signed __int16 v1; // r1@2
  signed int v2; // r5@4
  unsigned int v3; // r4@4
  __int16 v5; // [sp+0h] [bp-10h]@4
  int v6; // [sp+Ch] [bp-4h]@6

  if ( a1 << 24 )
    v1 = 31744;
  else
    v1 = 31;
  v5 = v1;
  v2 = 0;
  v3 = 15728640;
  do
  {
    LoadPalette((int)&v5, v3 >> 16, 2);
    v3 += 0x10000;
    ++v2;
  }
  while ( v2 <= 15 );
  return v6;
}
