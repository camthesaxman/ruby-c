int __fastcall sub_80ADEAC(unsigned __int8 a1)
{
  __int16 v1; // r2@3
  int *v2; // r1@4
  int v4; // [sp+0h] [bp-4h]@0

  word_30041B4 -= 7;
  if ( word_30041B4 & 0x8000 )
    word_30041B4 = 0;
  v1 = word_30041B4;
  if ( !word_30041B4 )
  {
    v2 = &dword_3004B20[10 * a1];
    *v2 = (int)sub_80ADEEC;
    *((_WORD *)v2 + 4) = v1;
  }
  return v4;
}
