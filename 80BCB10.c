int __fastcall sub_80BCB10(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r6@1
  _BYTE *v3; // r4@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 40 * a1;
  v3 = &byte_3004B28[v2];
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  *(_BYTE *)(160 * *((_WORD *)v3 + 4) + 0x202713D) &= 0x3Fu;
  --*(_WORD *)v3;
  if ( (signed int)*(_WORD *)&byte_3004B28[v2 + 4] > 0 )
    *((_WORD *)v3 + 2) = *(_WORD *)&byte_3004B28[v2 + 4] - 1;
  if ( (signed int)*(_WORD *)v3 <= 7 )
    --*((_WORD *)v3 + 3);
  sub_80BC7D8(v1);
  dword_3004B20[v2 / 4] = (int)sub_80BC824;
  return v5;
}
