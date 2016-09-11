int __fastcall sub_812B058(unsigned __int8 a1)
{
  int v1; // r8@1
  __int16 v2; // ST00_2@1
  unsigned __int8 v3; // r5@1
  char v4; // r6@1
  __int16 v5; // r10@1
  __int16 v6; // r7@1
  __int16 v7; // r9@1
  char v8; // r4@1
  char v9; // r0@1
  __int16 v10; // r5@1
  char v11; // r0@1
  int *v12; // r1@1
  int v14; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = word_3004B00[0];
  v3 = word_3004B04;
  v4 = word_3004B06;
  v5 = (unsigned __int8)word_3004B08;
  v6 = (unsigned __int8)word_3004B0A;
  v7 = (unsigned __int8)word_3004B0C;
  v8 = sub_8076F98(word_3004B02);
  v9 = sub_8076F98(v3);
  v10 = v9;
  v11 = sub_807712C(v8, v9, v4);
  v12 = &dword_3004B20[10 * v1];
  *((_WORD *)v12 + 4) = v2;
  *((_WORD *)v12 + 5) = v8;
  *((_WORD *)v12 + 6) = v10;
  *((_WORD *)v12 + 7) = v11;
  *((_WORD *)v12 + 8) = v5;
  *((_WORD *)v12 + 9) = v6;
  *((_WORD *)v12 + 10) = v7;
  *((_WORD *)v12 + 14) = 0;
  *((_WORD *)v12 + 15) = v8;
  *((_WORD *)v12 + 16) = v7;
  *v12 = (int)sub_812B108;
  call_via_r2(v1, v12, sub_812B108);
  return v14;
}
