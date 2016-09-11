int __fastcall sub_80B9C4C(int a1)
{
  int v1; // r2@1
  signed int v2; // r1@1

  v1 = 0;
  v2 = 0;
  do
    v1 = (v1 + *(_BYTE *)(a1 + v2++)) & 0xFF;
  while ( v2 <= 255 );
  return v1;
}
