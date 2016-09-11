int __fastcall sub_804E844(int a1, unsigned __int16 a2)
{
  int v2; // r6@1
  unsigned __int16 v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = GetBerryInfo((a2 + 124) & 0xFF);
  *(_WORD *)v2 = v3;
  StringCopy((_BYTE *)(v2 + 2), (_BYTE *)v4);
  *(_BYTE *)(v2 + 9) = *(_BYTE *)(v4 + 21);
  *(_BYTE *)(v2 + 10) = *(_BYTE *)(v4 + 22);
  *(_BYTE *)(v2 + 11) = *(_BYTE *)(v4 + 23);
  *(_BYTE *)(v2 + 12) = *(_BYTE *)(v4 + 24);
  *(_BYTE *)(v2 + 13) = *(_BYTE *)(v4 + 25);
  *(_BYTE *)(v2 + 14) = *(_BYTE *)(v4 + 26);
  return v6;
}
