int atkA4_setencore()
{
  signed int v0; // r5@1
  int v1; // r2@4
  int v2; // r0@11
  char v3; // r0@11
  int v5; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  if ( *(_WORD *)(88 * v2024C08 + 0x2024A8C) != *(_WORD *)(2 * v2024C08 + 0x2024C34) )
  {
    do
      ++v0;
    while ( v0 <= 3 && *(_WORD *)(2 * v0 + 88 * v2024C08 + 0x2024A8C) != *(_WORD *)(2 * v2024C08 + 0x2024C34) );
  }
  v1 = *(_WORD *)(2 * v2024C08 + 0x2024C34);
  if ( v1 == 165 || v1 == 227 || v1 == 119 )
    v0 = 4;
  if ( *(_WORD *)(28 * v2024C08 + 0x2024CAE) || v0 == 4 || !*(_BYTE *)(v0 + 88 * v2024C08 + 33704612) )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_WORD *)(28 * v2024C08 + 0x2024CAE) = *(_WORD *)(2 * v0 + 88 * v2024C08 + 0x2024A8C);
    v2 = 28 * v2024C08 + 33705128;
    *(_BYTE *)(v2 + 12) = v0;
    v3 = Random(v2);
    *(_BYTE *)(28 * v2024C08 + 0x2024CB6) = *(_BYTE *)(28 * v2024C08 + 0x2024CB6) & 0xF0 | ((v3 & 3) + 3);
    *(_BYTE *)(28 * v2024C08 + 0x2024CB6) = *(_BYTE *)(28 * v2024C08 + 0x2024CB6) & 0xF | 16
                                                                                        * *(_BYTE *)(28 * v2024C08 + 0x2024CB6);
    v2024C10 += 5;
  }
  return v5;
}
