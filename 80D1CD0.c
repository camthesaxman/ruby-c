int __fastcall sub_80D1CD0(unsigned __int8 a1)
{
  int v1; // r4@1
  _BOOL4 v2; // r0@1
  signed __int16 v3; // r2@1
  int *v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = sub_8076BE0();
  v3 = 240;
  if ( v2 << 24 )
    v3 = 152;
  word_30042C4 = v3;
  word_3004240 = 160;
  v4000040 = v3;
  v4000044 = 160;
  v4000048 = 16159;
  v400004A = 16191;
  v4000050 = 200;
  v4000054 = 16;
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 4) = 0;
  *((_WORD *)v4 + 5) = v3;
  *v4 = (int)sub_80D1D48;
  return v6;
}
