int __fastcall sub_80E2C8C(unsigned __int8 a1, int a2)
{
  int *v2; // r2@1
  int v4; // [sp+0h] [bp-4h]@0

  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 4) = a2;
  *((_WORD *)v2 + 5) = HIWORD(a2);
  *((_WORD *)v2 + 6) = word_3004B02;
  *((_WORD *)v2 + 7) = word_3004B04;
  *((_WORD *)v2 + 8) = word_3004B06;
  *((_WORD *)v2 + 9) = word_3004B08;
  *((_WORD *)v2 + 14) = word_3004B04;
  *v2 = (int)sub_80E2CD0;
  call_via_r1(a1, sub_80E2CD0);
  return v4;
}
