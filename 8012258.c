int __fastcall sub_8012258(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r3@1
  int v3; // r6@1
  _BYTE *v4; // r2@1
  int v5; // r4@3
  unsigned __int8 v6; // r0@3
  signed int v7; // r3@4
  _BYTE *v8; // r4@4
  _BYTE *v9; // r2@4
  signed int v10; // r3@7
  _BYTE *v11; // r1@7
  int v13; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 2 * a1;
  v4 = (_BYTE *)(v3 + a1 + 90220 + 0x2000000);
  do
    *(_BYTE *)(v2++ + 33784944) = *v4++;
  while ( v2 <= 2 );
  v5 = (unsigned __int8)pokemon_order_func(*(_BYTE *)(2 * a1 + 0x2024A6A));
  v6 = pokemon_order_func(*(_BYTE *)(v1 + 33644648));
  sub_8094C98(v5, v6);
  if ( v20239F8 & 1 )
  {
    v7 = 0;
    v8 = (_BYTE *)(v3 + v1 + 90220 + 0x2000000);
    v9 = (_BYTE *)(3 * (v1 ^ 2) + 33644652);
    do
    {
      *v8 = *(_BYTE *)(v7 + 33784944);
      *v9 = *(_BYTE *)(v7 + 33784944);
      ++v8;
      ++v9;
      ++v7;
    }
    while ( v7 <= 2 );
  }
  else
  {
    v10 = 0;
    v11 = (_BYTE *)(v3 + v1 + 90220 + 0x2000000);
    do
      *v11++ = *(_BYTE *)(v10++ + 33784944);
    while ( v10 <= 2 );
  }
  return v13;
}
