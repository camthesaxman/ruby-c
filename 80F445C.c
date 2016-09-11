int __fastcall sub_80F445C(int a1, unsigned __int16 a2)
{
  int v2; // r0@1
  int v3; // r4@1

  v2 = sub_8072C14(a1, a2, 0x17u, 1u);
  *(_BYTE *)v2 = -4;
  *(_BYTE *)(v2 + 1) = 17;
  *(_BYTE *)(v2 + 2) = 1;
  *(_BYTE *)(v2 + 3) = -70;
  v3 = v2 + 4;
  *(_BYTE *)v3 = -4;
  *(_BYTE *)(v3 + 1) = 17;
  *(_BYTE *)(v3 + 2) = 1;
  return sub_8072C14(v2 + 7, v2008774 + 1, 0x32u, 1u);
}
