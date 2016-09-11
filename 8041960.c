int __fastcall sub_8041960(int a1, unsigned __int8 a2)
{
  signed int v2; // r2@1
  int v3; // r3@3
  signed int v4; // r2@3
  int v6; // [sp+0h] [bp-10h]@2
  int v7; // [sp+Ch] [bp-4h]@7

  *(_BYTE *)(a1 + a2) = -1;
  v2 = 0;
  do
  {
    *((_BYTE *)&v6 + v2) = *(_BYTE *)(a1 + v2);
    ++v2;
  }
  while ( v2 <= 5 );
  v3 = 0;
  v4 = 0;
  do
  {
    if ( *((_BYTE *)&v6 + v4) != 255 )
      *(_BYTE *)(a1 + v3++) = *((_BYTE *)&v6 + v4);
    ++v4;
  }
  while ( v4 <= 5 );
  return v7;
}
