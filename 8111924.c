int __fastcall sub_8111924(int a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r8@1
  __int16 v5; // r4@1
  __int16 v6; // r5@1
  __int16 v7; // r6@1
  int *v8; // r1@1
  int v10; // [sp+10h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_81118A4, 0)];
  *((_WORD *)v8 + 4) = 0;
  *((_WORD *)v8 + 5) = v4;
  *((_WORD *)v8 + 6) = HIWORD(v4);
  *((_WORD *)v8 + 8) = v5;
  *((_WORD *)v8 + 9) = v6;
  *((_WORD *)v8 + 16) = v7;
  SetMainCallback2((int)sub_8111894);
  return v10;
}
