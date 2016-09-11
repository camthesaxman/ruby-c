int __fastcall sub_80ADC4C(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  *((_WORD *)v1 + 4) = v2 + 1;
  if ( v2 > 29 )
  {
    *((_WORD *)v1 + 4) = 0;
    sub_80AFF10();
    *v1 = (int)sub_80ADC84;
  }
  return v4;
}
