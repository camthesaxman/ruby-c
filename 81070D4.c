int sub_81070D4()
{
  unsigned int v0; // r3@1
  signed int v1; // r3@6
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
    *(_BYTE *)(v0++ + 33647104) = 0;
  while ( v0 <= 0x2F );
  if ( v20239F8 & 8 && v202FF5E != 1024 && !(v20239F8 & 0x982) )
  {
    v1 = 0;
    do
    {
      if ( *((_WORD *)&unk_81F050C + 20 * v202FF5E + v1) )
      {
        *(_WORD *)(2 * v2016A2C + 0x2016A24) = *((_WORD *)&unk_81F050C + 20 * v202FF5E + v1);
        ++v2016A2C;
      }
      ++v1;
    }
    while ( v1 <= 3 );
  }
  sub_810715C();
  return v3;
}
