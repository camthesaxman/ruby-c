int __fastcall sub_80ADDA4(unsigned __int8 a1)
{
  int v1; // r6@1
  signed int v2; // r3@1
  _WORD *v3; // r2@1
  signed int v4; // r1@1
  int v5; // r0@3
  int *v6; // r0@3
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  word_30042A0 = 0;
  word_3004280 = 0;
  v2 = 33657440;
  v3 = (_WORD *)33785472;
  v4 = 3;
  do
  {
    *v3 = *(_WORD *)(v2 + 4);
    v2 += 28;
    ++v3;
    --v4;
  }
  while ( v4 >= 0 );
  v5 = sub_80AF668();
  sub_80AF138(v5);
  sub_80BE23C(*(_WORD *)(28 * v2038695 + 0x2019268));
  dword_3005D28 = dword_3004818;
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"ÑÙ´æÙ");
  sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
  v6 = &dword_3004B20[10 * v1];
  *((_WORD *)v6 + 6) = 0;
  *v6 = (int)sub_80ADE54;
  return v8;
}
