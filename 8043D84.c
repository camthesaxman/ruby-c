int __fastcall sub_8043D84(unsigned __int8 a1, char a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v7; // [sp+8h] [bp-4h]@0

  v5 = 20 * a1 + 33650768;
  *(_BYTE *)v5 = a2;
  *(_DWORD *)(v5 + 4) = a3;
  *(_DWORD *)(v5 + 8) = a4;
  *(_DWORD *)(v5 + 12) = a5;
  *(_DWORD *)(v5 + 16) = -32768;
  return v7;
}
