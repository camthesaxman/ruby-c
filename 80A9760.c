signed int __fastcall sub_80A9760(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r6@1
  int v3; // r4@1
  unsigned int v4; // r5@1
  int *v5; // r2@2
  int v6; // r1@3
  int v7; // r1@7
  int *v9; // r0@10
  int v10; // [sp+0h] [bp-DCh]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v10, 33709004, 200);
  v4 = 0;
  do
  {
    v5 = &v10 + v4;
    if ( *(_WORD *)v5 == v2 )
    {
      v6 = *((_WORD *)v5 + 1);
      if ( v6 + v3 <= 999 )
      {
        *((_WORD *)v5 + 1) = v6 + v3;
        goto _080A97DC;
      }
      v3 = (v6 + v3 + 64537) & 0xFFFF;
      *((_WORD *)v5 + 1) = 999;
      if ( !v3 )
        goto _080A97DC;
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 0x31 );
  if ( v3 )
  {
    v7 = (char)sub_80A96AC();
    if ( v7 == -1 )
      return 0;
    v9 = &v10 + v7;
    *(_WORD *)v9 = v2;
    *((_WORD *)v9 + 1) = v3;
  }
_080A97DC:
  memcpy(33709004, &v10, 200);
  return 1;
}
