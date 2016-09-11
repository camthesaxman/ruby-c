int __fastcall sub_809070C(__int16 a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  __int16 v5; // r4@1
  int result; // r0@1
  int *v7; // r1@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  result = (unsigned __int8)CreateTask((int)sub_8090750, 0);
  v7 = &dword_3004B20[10 * result];
  *((_WORD *)v7 + 4) = 0;
  *((_WORD *)v7 + 5) = v5;
  *((_WORD *)v7 + 16) = v3;
  *((_WORD *)v7 + 17) = HIWORD(v3);
  *((_WORD *)v7 + 18) = v4;
  *((_WORD *)v7 + 19) = HIWORD(v4);
  return result;
}
