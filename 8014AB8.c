signed int __fastcall sub_8014AB8(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  int v3; // r1@2
  int v4; // r2@5
  char v5; // r0@5
  char v6; // r1@5
  unsigned int v7; // r0@10
  int v8; // r4@11
  int v9; // r0@11

  v1 = a1;
  v2 = 0;
  if ( *(_WORD *)(88 * a1 + 0x2024AAE) == 175 )
    v3 = *(_BYTE *)(28 * a1 + 0x2024DF7);
  else
    v3 = itemid_get_x12(*(_WORD *)(88 * a1 + 0x2024AAE)) & 0xFF;
  v2024C0B = v1;
  if ( v3 == 37 )
  {
    v2024C04 = *(_WORD *)(88 * v1 + 0x2024AAE);
    v4 = 16 * v1 + 33705256;
    v5 = *(_BYTE *)(16 * v1 + 0x2024D29) & 0xE7;
    v6 = 8;
_08014B50:
    *(_BYTE *)(v4 + 1) = v5 | v6;
    v2 = 1;
    goto _08014BC2;
  }
  if ( *(_BYTE *)(88 * v1 + 0x2024AA0) == 50 )
  {
    v2024C06 = 50;
    v4 = 16 * v1 + 33705256;
    v5 = *(_BYTE *)(16 * v1 + 0x2024D29) & 0xE7;
    v6 = 16;
    goto _08014B50;
  }
  if ( !(v20239F8 & 1) )
  {
    v7 = *(_WORD *)(88 * v1 + 0x2024A86);
    if ( v7 >= *(_WORD *)(88 * (v1 ^ 1) + 0x2024A86)
      || (v8 = (*(_WORD *)(88 * v1 + 0x2024A86) << 7) / *(_WORD *)(88 * (v1 ^ 1) + 0x2024A86),
          v9 = 30 * v2016078,
          ((v8 + v9) & 0xFFu) > (unsigned __int8)Random(v9)) )
    {
      v2 = 1;
    }
  }
  ++v2016078;
_08014BC2:
  if ( v2 )
  {
    v2024A7E = v2024A68;
    v2024D26 = 4;
  }
  return v2;
}
