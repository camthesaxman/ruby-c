int __fastcall sub_806E35C(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, int a5)
{
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r6@1
  _BYTE *v8; // r1@2
  int v9; // r2@2
  int v11; // [sp+10h] [bp-4h]@0

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !sub_8040D8C(a1, a5) )
  {
    v8 = &gUnknown_08376738[24 * v6] + 4 * v7;
    v9 = (v8[1] + 1) & 0xFF;
    if ( v5 )
    {
      if ( v5 == 254 )
        sub_806E1D0(0x44u, *v8 + 3, v9);
    }
    else
    {
      sub_806E1D0(0x42u, *v8 + 3, v9);
    }
  }
  return v11;
}
