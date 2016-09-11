int __fastcall sub_8148EC0(unsigned __int8 a1, __int16 a2, __int16 a3, __int16 a4)
{
  __int16 v4; // r5@1
  __int16 v5; // r6@1
  __int16 v6; // r8@1
  __int16 v7; // ST00_2@1
  unsigned __int8 v8; // r0@1
  int v9; // r4@1
  int *v10; // r0@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = CreateTask((int)sub_8148F3C, 0);
  v9 = v8;
  v10 = &dword_3004B20[10 * v8];
  *((_WORD *)v10 + 4) = v4;
  *((_WORD *)v10 + 5) = v5;
  *((_WORD *)v10 + 6) = 0;
  *((_WORD *)v10 + 7) = 0;
  *((_WORD *)v10 + 8) = v6;
  *((_WORD *)v10 + 9) = 0;
  *((_WORD *)v10 + 10) = 0;
  *((_WORD *)v10 + 11) = v7;
  *((_WORD *)v10 + 12) = 8;
  *((_WORD *)v10 + 13) = 0;
  call_via_r9(v9);
  return v9;
}
