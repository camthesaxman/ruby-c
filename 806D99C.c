int __fastcall sub_806D99C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r5@1
  _BYTE *v7; // r1@1
  int v8; // ST04_4@1
  unsigned __int8 v9; // r4@1
  int v11; // [sp+1Ch] [bp-4h]@0

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = &gUnknown_08376678[24 * a3] + 4 * a2;
  v8 = *(_DWORD *)(a4 + 24);
  v9 = sub_809D2FC(*(_WORD *)a4, sub_809D62C, *v7, v7[1]);
  sub_806DE50(v5, v6, v9);
  sub_806D7F8(v9, *(_WORD *)(v4 + 16), *(_WORD *)(v4 + 18));
  return v11;
}
