int __fastcall sub_80BA79C(_BYTE *a1, char a2, int a3)
{
  unsigned int v3; // r3@1
  unsigned int v4; // r3@3
  int v5; // r5@3
  int v7; // [sp+0h] [bp-1Ch]@2
  char v8; // [sp+Ah] [bp-12h]@3
  int v9; // [sp+18h] [bp-4h]@6

  v3 = 0;
  do
  {
    *((_BYTE *)&v7 + v3) = 0;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0xA );
  v8 = -1;
  v4 = 0;
  v5 = a3 << 24;
  if ( *a1 != 255 )
  {
    do
    {
      *((_BYTE *)&v7 + v4) = a1[v4];
      v4 = (v4 + 1) & 0xFF;
    }
    while ( a1[v4] != 255 && v4 <= 9 );
  }
  MenuPrint((int)&v7, a2, BYTE3(v5));
  return v9;
}
