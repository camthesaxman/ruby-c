int __fastcall sub_80ADC84(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_80AFF28() << 24 )
  {
    v2 = &dword_3004B20[10 * v1];
    *((_WORD *)v2 + 4) = 0;
    *v2 = (int)sub_80ADCB4;
  }
  return v4;
}
