int __fastcall sub_812AF30(unsigned __int8 a1)
{
  int *v1; // r6@1
  char v2; // r4@1
  char v3; // r0@1
  __int16 v4; // r5@1
  char v5; // r0@1
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B00[0];
  *((_WORD *)v1 + 5) = word_3004B02;
  v2 = sub_8076F98(0xC0u);
  v3 = sub_8076F98(0x3Fu);
  v4 = v3;
  v5 = sub_807712C(v2, v3, 2);
  *((_WORD *)v1 + 6) = v2;
  *((_WORD *)v1 + 7) = v4;
  *((_WORD *)v1 + 8) = v5;
  *((_WORD *)v1 + 14) = 10;
  *v1 = (int)sub_812AF98;
  return v7;
}
