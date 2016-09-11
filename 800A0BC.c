int __fastcall PrintMainMenuItem(int a1, unsigned __int8 a2, int a3)
{
  unsigned int v3; // r3@1
  char v5; // [sp+0h] [bp-30h]@1
  char v6; // [sp+1h] [bp-2Fh]@1
  char v7; // [sp+2h] [bp-2Eh]@1
  char v8; // [sp+1Dh] [bp-13h]@3
  int v9; // [sp+2Ch] [bp-4h]@3

  a3 = (unsigned __int8)a3;
  v5 = -4;
  v6 = 1;
  v7 = 14;
  v3 = 0;
  do
  {
    *(&v5 + v3 + 3) = *(_BYTE *)(a1 + v3);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0x19 );
  v8 = -1;
  MenuPrint(&v5, a2, a3);
  return v9;
}
