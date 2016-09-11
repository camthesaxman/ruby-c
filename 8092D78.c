int __fastcall sub_8092D78(unsigned __int8 a1)
{
  int v1; // r2@1
  char **v2; // r1@1
  char *v3; // r6@1
  _BYTE *v4; // r2@1
  _WORD *v5; // r8@1
  _WORD *v6; // r7@1
  unsigned int v7; // r5@1
  int v8; // r4@1
  int v10; // [sp+14h] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &(&gUnknown_083B5A7C)[8 * HIWORD(dword_3004B20[v1 + 2])];
  v3 = *v2;
  v4 = &byte_3004B28[v1 * 4];
  v5 = &v4[2 * *((_BYTE *)v2 + 4)];
  v6 = &v4[2 * *((_BYTE *)v2 + 5)];
  MenuZeroFillWindowRect(0x12u, 1u, 0x1Cu, 0xCu);
  v7 = 0;
  v8 = *v6;
  do
  {
    if ( !*(_DWORD *)&v3[8 * v8 + 4] )
      break;
    MenuPrint(*(_DWORD *)&v3[8 * v8 + 4], 18, 2 * v7 + 1);
    v7 = (v7 + 1) & 0xFFFF;
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v7 <= 5 );
  sub_8091E20(*(_DWORD *)&v3[8 * (*v5 + *v6)]);
  return v10;
}
