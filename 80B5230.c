int __fastcall sub_80B5230(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  __int16 v6; // r4@1
  __int16 v7; // r5@1
  __int16 v8; // r6@1
  __int16 v9; // ST00_2@1
  int *v10; // r1@1
  int v12; // [sp+18h] [bp-4h]@0

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80B52B4, 80)];
  *((_WORD *)v10 + 4) = v6;
  *((_WORD *)v10 + 5) = v7;
  *((_WORD *)v10 + 6) = v8;
  *((_WORD *)v10 + 7) = v9;
  *((_WORD *)v10 + 8) = a5;
  *((_WORD *)v10 + 9) = a6 > 3u;
  return v12;
}
