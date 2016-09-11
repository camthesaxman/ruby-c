int __fastcall PrintMenuItemsReordered(char a1, char a2, unsigned __int8 a3, int a4, int a5)
{
  int v5; // r8@1
  char v6; // r7@1
  char v7; // r6@1
  unsigned int v8; // r5@1
  unsigned int i; // r4@1
  int v11; // [sp+14h] [bp-4h]@0

  v5 = a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  for ( i = 0; i < v8; i = (i + 1) & 0xFF )
    MenuPrint(*(_DWORD *)(8 * *(_BYTE *)(a5 + i) + v5), v6, v7 + 2 * i);
  return v11;
}
