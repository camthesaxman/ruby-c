int __fastcall sub_80CFFD8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = 20;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  *(_BYTE *)(v1 + 44) |= 0x80u;
  oamt_set_x3A_32(v1, (int)sub_80D0030);
  return v3;
}
