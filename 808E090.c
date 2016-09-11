int __fastcall sub_808E090(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r5@1
  unsigned int v4; // r3@1
  int v5; // r0@2
  int v7; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = 0;
  do
  {
    v5 = 2 * (v3 + v4) + ((a3 << 11) & 0x7FFFFFF) + ((a2 << 6) & 0x3FFF);
    *(_WORD *)(v5 + 100663296) = 0;
    *(_WORD *)(v5 + 100663360) = 0;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 0xB );
  return v7;
}
