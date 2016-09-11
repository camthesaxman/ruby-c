int __fastcall sub_80A490C(unsigned __int16 a1)
{
  int v1; // r5@2
  int v2; // r0@2
  int v3; // r0@3
  int v5; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559] == (unsigned __int8)byte_3005D10[4 * v2038559 + 2] )
  {
    v1 = (unsigned __int8)sub_8072A18((int)"ÌÙטיזג", 4, 104, 104, 1);
    v2 = v1 + sub_8072A18((int)*(&gUnknown_0840E740 + (unsigned __int8)byte_3000701), 4, 120, 104, 1);
  }
  else
  {
    v3 = itemid_get_description(a1);
    v2 = sub_8072A18(v3, 4, 104, 104, 1);
  }
  if ( (unsigned __int8)v2 <= 2u )
    MenuZeroFillWindowRect(0, (unsigned int)((v2 << 25) + 218103808) >> 24, 0xDu, 0x14u);
  return v5;
}
