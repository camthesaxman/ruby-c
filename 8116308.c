int __fastcall sub_8116308(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v2019003 |= 0x80u;
  v2019038 = &gSprites[68 * *(_BYTE *)(v201907C + 0x201903C)];
  *(_DWORD *)(v2019038 + 28) = sub_81191F4;
  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 10) + 1;
  *((_WORD *)v1 + 10) = v2;
  ++*((_WORD *)v1 + 12);
  sub_81182F8((6 - v2) & 0xFF);
  m4aSongNumStart(92);
  *v1 = (int)sub_811637C;
  return v4;
}
