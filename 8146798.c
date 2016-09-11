int __fastcall sub_8146798(unsigned __int8 a1)
{
  int v1; // r4@1
  _WORD *v2; // r0@1
  int v3; // r3@1
  int v4; // r0@1
  int v5; // r0@5
  __int16 v6; // r2@6
  int *v7; // r1@7
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = (*v2 + (unsigned __int16)word_30041B4) & 0xFF;
  word_30041B4 = (*v2 + word_30041B4) & 0xFF;
  v4 = *v2;
  if ( v4 > 0 && v3 == 144 || v4 < 0 && v3 == 112 )
  {
    v5 = sub_8146810(BYTE2(dword_3004B20[10 * v1 + 2]));
    sub_81468BC(v5);
  }
  v6 = word_30041B4;
  if ( !word_30041B4 )
  {
    v7 = &dword_3004B20[10 * v1];
    *((_WORD *)v7 + 4) = word_30041B4;
    *((_WORD *)v7 + 5) = v6;
    *v7 = (int)sub_8146480;
  }
  return v9;
}
