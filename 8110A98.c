int __fastcall sub_8110A98(unsigned __int16 a1, int a2)
{
  int v2; // r2@1
  int v3; // r0@2
  __int16 v4; // r0@2
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  a2 = (unsigned __int16)a2;
  if ( v2000110 <= 0x3Fu )
  {
    *(_BYTE *)(4 * v2000110 + 0x2000010) = v2;
    *(_BYTE *)(4 * v2000110 + 0x2000011) = a2;
    v3 = get_mapheader_by_bank_and_number(v2, a2);
    v4 = sub_80FBA04(*(_BYTE *)(v3 + 20));
    *(_WORD *)(4 * v2000110 + 0x2000012) = v4;
    ++v2000110;
  }
  return v6;
}
