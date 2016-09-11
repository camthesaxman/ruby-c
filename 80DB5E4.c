int __fastcall sub_80DB5E4(int a1)
{
  int v1; // r8@1
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  unsigned __int8 v4; // r0@1
  __int16 v5; // r9@1
  int v6; // r0@1
  int v8; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v4 = sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 34) = v4;
  v5 = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 54) = 16 * *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 56) = 16 * v4;
  *(_WORD *)(v1 + 58) = 16 * (v2 - (signed int)*(_WORD *)(v1 + 32)) / 12;
  *(_WORD *)(v1 + 60) = 16 * (v3 - (signed int)*(_WORD *)(v1 + 34)) / 12;
  v6 = sub_80790F0(v2 - v5, v3 - v4);
  sub_8078FDC(v1, 1, 0x100u, 0x100u, (unsigned int)((v6 << 16) - 0x40000000) >> 16);
  *(_DWORD *)(v1 + 28) = sub_80DB6A0;
  return v8;
}
