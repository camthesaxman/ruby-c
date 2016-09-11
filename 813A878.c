int __fastcall sub_813A878(unsigned __int8 a1)
{
  int v1; // r4@1
  char *v2; // r5@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &byte_3004B28[v1 * 4];
  MenuZeroFillWindowRect(6u, 6u, 0xDu, 0xBu);
  InitMenu(0, 16, 2, v2[8], *v2, 13);
  sub_80F98DC(0);
  sub_80F98DC(1u);
  sub_813AD58(*(_WORD *)(4 * (*((_WORD *)v2 + 1) + *(_WORD *)v2) + 0x2025BCC));
  dword_3004B20[v1] = (int)sub_813A280;
  return v4;
}
