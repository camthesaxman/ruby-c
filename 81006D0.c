int __fastcall sub_81006D0(int a1)
{
  unsigned int v1; // r1@1
  unsigned int v2; // r1@3
  int v4; // [sp+8h] [bp-4h]@0

  v1 = 0;
  do
  {
    *(_BYTE *)(a1 + 132 + v1) = 0;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 0x7FF );
  v2 = 0;
  do
  {
    *(_WORD *)(a1 + 4 + 2 * v2) = 0;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x3F );
  return v4;
}
