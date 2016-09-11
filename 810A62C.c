int __fastcall sub_810A62C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)gUnknown_083F76E4[2 * LOWORD(dword_3004B20[10 * *(_WORD *)(a1 + 46) + 2])];
  *(_WORD *)(a1 + 34) = (unsigned __int8)gUnknown_083F76E4[2 * LOWORD(dword_3004B20[10 * *(_WORD *)(a1 + 46) + 2]) + 1];
  *(_WORD *)(a1 + 38) = sine(*(_WORD *)(a1 + 48), 8);
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) & 0xFF) + 4;
  return v3;
}
