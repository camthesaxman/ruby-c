int __fastcall sub_8149ADC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r2@1
  int *v3; // r1@1
  signed int v4; // r0@1
  int v5; // r6@2
  unsigned int v6; // r4@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 19);
  if ( v4 > 95 )
  {
    *v3 = (int)sub_8149B34;
  }
  else
  {
    v5 = v2;
    if ( v4 <= 5 )
    {
      v6 = 0;
      do
      {
        sub_81496E4(16 * v6);
        v6 = (v6 + 1) & 0xFF;
      }
      while ( v6 <= 8 );
    }
    ++HIWORD(dword_3004B20[2 * (v5 + v1) + 9]);
  }
  return v8;
}
