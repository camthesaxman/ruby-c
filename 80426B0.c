int __fastcall sub_80426B0(int a1, _BYTE *a2)
{
  int v2; // r6@1
  _BYTE *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned __int8 v5; // r0@2
  char *v6; // r0@2
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *a2 = -1;
  v4 = 0;
  do
  {
    v5 = sub_8041664((unsigned int *)(v2 + 80 * v4), *(_DWORD *)(v2 + 272 + 4 * v4));
    *v3 = 52;
    v3[1] = -4;
    v3[2] = 20;
    v3[3] = 6;
    v6 = ConvertIntToDecimalStringN(v3 + 4, v5, 1, 3);
    *v6 = -4;
    v6[1] = 20;
    v6[2] = 0;
    v3 = StringCopy(v6 + 3, &gUnknown_0842CC28);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 1 );
  *v3 = -1;
  return v8;
}
