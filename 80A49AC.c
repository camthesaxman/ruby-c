int __fastcall sub_80A49AC(__int16 a1, int a2)
{
  int v2; // r4@1
  __int16 v3; // r5@1
  const char *v4; // r0@3
  __int16 v5; // r2@3
  int v7; // [sp+0h] [bp-70h]@9
  int v8; // [sp+6Ch] [bp-4h]@11

  v2 = a2;
  v3 = a1;
  if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559] == (unsigned __int8)byte_3005D10[4 * v2038559 + 2] )
  {
    if ( !a2 )
    {
      MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
      v4 = "ÌÙטיזג";
      v5 = 104;
_080A4A08:
      sub_80729D8((int)v4, 4, v5, 0);
      return v8;
    }
    if ( a2 == 1 )
    {
      v4 = (const char *)*(&gUnknown_0840E740 + (unsigned __int8)byte_3000701);
      v5 = 120;
      goto _080A4A08;
    }
  }
  else
  {
    if ( !a2 )
      MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
    if ( sub_80A99A8(&v7, v3, v2) )
      sub_80729D8((int)&v7, 4, (unsigned int)((v2 << 20) + 6815744) >> 16, 0);
  }
  return v8;
}
