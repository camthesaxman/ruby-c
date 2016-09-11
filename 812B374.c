int __fastcall sub_812B374(unsigned __int8 a1)
{
  int v1; // r8@1
  unsigned __int8 v2; // r5@1
  char v3; // r6@1
  __int16 v4; // r9@1
  char v5; // r4@1
  char v6; // r0@1
  __int16 v7; // r5@1
  char v8; // r0@1
  int *v9; // r1@1
  int v11; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = word_3004B02;
  v3 = word_3004B04;
  v4 = word_3004B06;
  v5 = sub_8076F98(word_3004B00[0]);
  v6 = sub_8076F98(v2);
  v7 = v6;
  v8 = sub_807712C(v5, v6, v3);
  v9 = &dword_3004B20[10 * v1];
  *((_WORD *)v9 + 5) = v5;
  *((_WORD *)v9 + 6) = v7;
  *((_WORD *)v9 + 7) = v8;
  *((_WORD *)v9 + 9) = v4;
  *((_WORD *)v9 + 14) = 0;
  *((_WORD *)v9 + 15) = v5;
  *v9 = (int)sub_812B404;
  call_via_r2(v1, v9, sub_812B404);
  return v11;
}
