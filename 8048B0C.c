int __fastcall sub_8048B0C(int a1)
{
  __int16 *v1; // r1@4
  __int16 *v2; // r4@4
  __int16 *v3; // r3@4
  signed int v4; // r2@4
  void *v5; // r3@6
  signed int v6; // r4@6
  unsigned int v7; // r5@6
  signed int v8; // r2@8
  __int16 *v9; // r3@8
  int v11; // [sp+10h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (_BYTE)a1 )
  {
    if ( a1 == 1 )
    {
      v40000D4 = &gTradeStripesBG3Tilemap;
      v40000D8 = 100677632;
      v40000DC = -2147482624;
      sub_804A6DC(0);
      sub_804A6DC(1);
      sub_804A938(dword_3004824 + 200);
      v4000008 &= 0xFFFCu;
      v400000A = 1281;
      v400000C = 1538;
      v400000E = 1795;
      v4000010 = 0;
      v4000014 = 0;
      v4000018 = 0;
      v400001C = 0;
      v4000012 = 0;
      v4000016 = 0;
      v400001A = 0;
      v400001E = 0;
    }
  }
  else
  {
    v1 = &gUnknown_08EA02C8;
    v2 = (__int16 *)33746632;
    v3 = (__int16 *)33745608;
    v4 = 47;
    do
    {
      *v3 = *v1;
      *v2 = *v1;
      ++v1;
      ++v2;
      ++v3;
      --v4;
    }
    while ( v4 >= 0 );
    v5 = &gUnknown_08EA0348;
    v6 = 100663296;
    v7 = 4736;
    do
    {
      v40000D4 = v5;
      v40000D8 = v6;
      v40000DC = -2147481600;
      v5 = (char *)v5 + 4096;
      v6 += 4096;
      v7 -= 4096;
    }
    while ( v7 > 0x1000 );
    v40000D4 = v5;
    v40000D8 = v6;
    v40000DC = (v7 >> 1) | 0x80000000;
    v8 = 0;
    v9 = &gUnknown_08EA15C8;
    do
    {
      *(_WORD *)(dword_3004824 + 218 + 2 * v8) = *v9;
      ++v9;
      ++v8;
    }
    while ( v8 <= 1023 );
    v40000D4 = &gTradeStripesBG2Tilemap;
    v40000D8 = 100675584;
    v40000DC = -2147482624;
  }
  return v11;
}
