int __fastcall sub_811D4C8(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)
{
  __int16 v5; // r8@1
  __int16 v6; // r4@1
  __int16 v7; // r5@1
  __int16 v8; // r6@1
  int *v9; // r1@1
  int v11; // [sp+14h] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_811D54C, 3)];
  *((_WORD *)v9 + 5) = v5;
  *((_WORD *)v9 + 6) = v6;
  *((_WORD *)v9 + 7) = v7;
  *((_WORD *)v9 + 8) = v8;
  *((_WORD *)v9 + 9) = a5;
  *((_WORD *)v9 + 10) = v5;
  return v11;
}
