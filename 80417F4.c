int __fastcall sub_80417F4(int a1)
{
  signed int v1; // r2@1
  _BYTE *v2; // r1@1
  _BYTE *v3; // r1@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = 7;
  v2 = (_BYTE *)(a1 + 43);
  do
  {
    *v2-- = 0;
    --v1;
  }
  while ( v1 >= 0 );
  v3 = (_BYTE *)(a1 + 54);
  do
    *v3-- = 0;
  while ( (signed int)v3 >= a1 + 44 );
  sub_80A2B40();
  return v5;
}
