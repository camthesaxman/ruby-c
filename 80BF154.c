int __fastcall sub_80BF154(unsigned __int8 a1, int a2)
{
  int v2; // r6@1
  unsigned __int8 v3; // r8@1
  signed int v4; // r7@1
  unsigned int v5; // r5@1
  unsigned __int16 v6; // r0@2
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *(_WORD *)(v2 + 6 + 2 * v5);
    if ( v6 )
      v4 += (unsigned __int16)itemid_get_market_price(v6) * *(_WORD *)(v2 + 12 + 2 * v5);
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 2 );
  if ( *(_BYTE *)(v2 + 2) == 1 )
    sub_80BF088(v3, v4 >> 1);
  else
    sub_80BF088(v3, v4);
  return v8;
}
