int sub_80F8DA0()
{
  int v0; // r6@1
  unsigned int i; // r5@1
  _BYTE *v2; // r0@4
  int v3; // r1@4
  _BYTE *v4; // r0@5
  int v6; // [sp+14h] [bp-4h]@0

  v0 = 0;
  for ( i = 0; i < *v200010C; i = (i + 1) & 0xFFFF )
  {
    ConvertEasyChatWordsToString(
      (_BYTE *)(27 * i + 0x2000000),
      (_WORD *)(v20000F4 + 2 * v0),
      *(_DWORD *)(4 * i + *(_DWORD *)(v200010C + 4)) << 28 >> 30,
      1u);
    v0 = (v0 + (*(_DWORD *)(4 * i + *(_DWORD *)(v200010C + 4)) << 28 >> 30)) & 0xFF;
  }
  if ( v2000100 )
  {
    v4 = StringCopy((_BYTE *)0x20000D8, "└цус");
    sub_80F8D7C(v4, (_BYTE *)(v20000F4 + 18));
    LOBYTE(v3) = *(_BYTE *)(v200010C + 2);
  }
  else
  {
    v2 = (_BYTE *)sub_80F8D7C((_BYTE *)0x20000D8, (_BYTE *)(v20000F4 + 18));
    StringCopy(v2, "└цус");
    v3 = *(_BYTE *)(v200010C + 2) - StringLength((_BYTE *)0x20000D8);
  }
  v20000F9 = v3;
  return v6;
}
