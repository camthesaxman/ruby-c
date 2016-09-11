int __fastcall sub_80AE5D4(unsigned __int8 a1, char a2)
{
  int v2; // r4@1
  _BYTE *v3; // r0@1
  int v5; // [sp+18h] [bp-4h]@0

  v2 = a1;
  v3 = PutWindowTilemap((_BYTE *)0x20238CC, &gEmptyString_81E72B0, a2);
  *v3 = -4;
  v3[1] = 6;
  v3[2] = 4;
  v3[3] = -70;
  if ( v203869A & 1 && *((_WORD *)&gLinkPlayers + 14 * v2 + 13) == 1 )
  {
    StringCopy(v3 + 4, &byte_3002978[28 * v2]);
    sub_8004D04(
      (int)&unk_3004210,
      33700044,
      22 * *(_BYTE *)(v2 + 33785494) + 592,
      (((unsigned int)(unsigned __int8)gUnknown_083CA310[2 * *(_BYTE *)(v2 + 33785494)] << 27) - 83886080) >> 24,
      8 * (unsigned __int8)byte_83CA311[2 * *(_BYTE *)(v2 + 33785494)],
      1);
  }
  else
  {
    StringCopy(v3 + 4, (_BYTE *)((v2 << 6) + 33785213));
    sub_8003460(
      (int)&unk_3004210,
      33700044,
      22 * *(_BYTE *)(v2 + 33785494) + 592,
      gUnknown_083CA310[2 * *(_BYTE *)(v2 + 33785494)],
      byte_83CA311[2 * *(_BYTE *)(v2 + 33785494)]);
  }
  return v5;
}
