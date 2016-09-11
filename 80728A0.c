int __fastcall PrintMenuItems(char a1, char a2, unsigned __int8 a3, int a4)
{
  int v4; // r8@1
  char v5; // r7@1
  char v6; // r6@1
  unsigned int v7; // r5@1
  unsigned int i; // r4@1
  int v10; // [sp+14h] [bp-4h]@0

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  for ( i = 0; i < v7; i = (i + 1) & 0xFF )
    MenuPrint(*(_DWORD *)(8 * i + v4), v5, v6 + 2 * i);
  return v10;
}
