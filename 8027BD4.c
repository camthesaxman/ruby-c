int atkA3_disablelastusedattack()
{
  signed int v0; // r4@1
  int v1; // r0@7
  char v2; // r0@7
  int v4; // [sp+18h] [bp-4h]@0

  v0 = 0;
  if ( *(_WORD *)(88 * v2024C08 + 0x2024A8C) != *(_WORD *)(2 * v2024C08 + 0x2024C34) )
  {
    do
      ++v0;
    while ( v0 <= 3 && *(_WORD *)(2 * v0 + 88 * v2024C08 + 0x2024A8C) != *(_WORD *)(2 * v2024C08 + 0x2024C34) );
  }
  if ( *(_WORD *)(28 * v2024C08 + 0x2024CAC) || v0 == 4 || !*(_BYTE *)(v0 + 88 * v2024C08 + 33704612) )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    byte_30041C0[0] = -3;
    byte_30041C1 = 2;
    word_30041C2 = *(_WORD *)(2 * v0 + 88 * v2024C08 + 0x2024A8C);
    byte_30041C4 = -1;
    v1 = 28 * v2024C08 + 33705128;
    *(_WORD *)(v1 + 4) = *(_WORD *)(2 * v0 + 88 * v2024C08 + 0x2024A8C);
    v2 = Random(v1);
    *(_BYTE *)(28 * v2024C08 + 0x2024CB3) = *(_BYTE *)(28 * v2024C08 + 0x2024CB3) & 0xF0 | ((v2 & 3) + 2);
    *(_BYTE *)(28 * v2024C08 + 0x2024CB3) = *(_BYTE *)(28 * v2024C08 + 0x2024CB3) & 0xF | 16
                                                                                        * *(_BYTE *)(28 * v2024C08 + 0x2024CB3);
    v2024C10 += 5;
  }
  return v4;
}
