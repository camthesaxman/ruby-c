int __fastcall sub_810421C(int a1)
{
  unsigned int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = 2;
  do
  {
    *(_WORD *)(a1 + 8 + 2 * v1) = 0;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return v3;
}
