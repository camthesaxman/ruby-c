int __fastcall AddNamingScreenTask(unsigned __int8 a1, int a2, __int16 a3, __int16 a4, int a5, int a6)
{
  int v6; // r9@1
  __int16 v7; // r8@1
  __int16 v8; // r5@1
  __int16 v9; // r6@1
  int *v10; // r4@1
  int v12; // [sp+18h] [bp-4h]@0

  v6 = a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)NamingScreenDummyTask, -1)];
  *((_WORD *)v10 + 4) = v7;
  *((_WORD *)v10 + 5) = v8;
  *((_WORD *)v10 + 6) = v9;
  *((_WORD *)v10 + 7) = HIWORD(a5);
  *((_WORD *)v10 + 8) = a5;
  StoreWordInTwoHalfwords((int)v10 + 18, v6);
  StoreWordInTwoHalfwords((int)v10 + 22, a6);
  return v12;
}
