int sub_80BDEC8()
{
  int v0; // r4@1
  int v1; // r0@1
  unsigned int v2; // r2@7
  unsigned int v3; // r4@11
  int v4; // r5@11
  char v5; // r0@12
  _BYTE *v6; // r3@12
  _BYTE *v7; // r6@12
  unsigned int v8; // r2@13
  int v10; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = sub_80BEB20();
  sub_80BE778(v1);
  if ( word_3004308 )
  {
    sub_80BE028();
    if ( !(sub_80BF77C(0xFFFF) << 24) )
    {
      if ( StringCompareWithoutExtCtrlCodes(
             (int)&gSpeciesNames[11 * (unsigned __int16)word_3004308],
             (int)&byte_300430A) )
      {
        byte_3005D38 = sub_80BF74C(33717868);
        if ( byte_3005D38 != -1 && (sub_80BF1B4(21) & 0xFF) != 1 )
        {
          v2 = 0;
          do
          {
            v0 = (v0 + (unsigned __int8)byte_3004316[v2]) & 0xFFFF;
            v2 = (v2 + 1) & 0xFF;
          }
          while ( v2 <= 0xA );
          if ( v0 || byte_30042E5 & 2 )
          {
            v3 = 0;
            v4 = 36 * byte_3005D38 + 33717868;
            *(_BYTE *)v4 = 21;
            *(_BYTE *)(v4 + 1) = 0;
            if ( byte_30042E5 & 2 )
            {
              LOBYTE(v3) = 1;
              v5 = 1;
              v6 = (_BYTE *)(v4 + 19);
              v7 = (_BYTE *)(v4 + 4);
            }
            else
            {
              v8 = 0;
              v6 = (_BYTE *)(v4 + 19);
              v7 = (_BYTE *)(v4 + 4);
              do
              {
                v3 = (v3 + (unsigned __int8)byte_3004316[v8]) & 0xFFFF;
                v8 = (v8 + 1) & 0xFF;
              }
              while ( v8 <= 0xA );
              if ( v3 > 0xFF )
                LOBYTE(v3) = -1;
              v5 = v2024C04;
            }
            *(_BYTE *)(v4 + 18) = v3;
            *(_BYTE *)(v4 + 15) = v5;
            StringCopy(v6, (_BYTE *)0x2024EA4);
            StringCopy(v7, &byte_300430A);
            *(_WORD *)(v4 + 16) = word_3004308;
            sub_80BE138(v4);
            *(_BYTE *)(v4 + 2) = 2;
            *(_BYTE *)(v4 + 3) = sub_80BDEAC((int)v7);
            SkipExtCtrlCodes(v7);
          }
        }
      }
    }
  }
  else
  {
    sub_80BE074();
  }
  return v10;
}
