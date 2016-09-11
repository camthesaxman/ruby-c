int __fastcall sub_80A4DD8(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, char a4, char a5, unsigned __int8 a6)
{
  __int16 v6; // r4@1
  __int16 v7; // r1@1
  char v8; // r6@1
  int *v9; // r2@1
  unsigned __int8 v10; // r8@1
  int v12; // [sp+1Ch] [bp-4h]@0

  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = &dword_3004B20[10 * a1];
  *((_WORD *)v9 + 5) = 1;
  *((_WORD *)v9 + 6) = v6 + 2;
  v10 = v7 + 1;
  *((_WORD *)v9 + 7) = v7 + 1;
  MenuDrawTextWindow(v6, v7);
  sub_80A4008((int)gBG1TilemapBuffer, v6 + 1, v10, v8 - 1, a5 - 1);
  sub_80A418C(1u, 1, v6 + 2, v10, a6);
  return v12;
}
