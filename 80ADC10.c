int __fastcall sub_80ADC10(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)sub_80037A0(33745160) == 1 )
  {
    v2 = &dword_3004B20[10 * v1];
    *((_WORD *)v2 + 4) = 0;
    *v2 = (int)sub_80ADC4C;
    sub_80B0D7C();
  }
  return v4;
}
