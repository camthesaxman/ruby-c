int __fastcall sub_804F1BC(int a1, int a2, int a3)
{
  unsigned int v3; // r4@1
  unsigned int v4; // r3@2
  int v5; // r5@2
  int v6; // r2@2
  unsigned int v7; // r0@6
  unsigned int v8; // r4@7
  int v9; // r3@10
  int v10; // r6@11
  unsigned __int16 v11; // r4@12
  int v13; // [sp+10h] [bp-4h]@0

  a1 = (unsigned __int16)a1;
  a2 = (unsigned __int8)a2;
  v3 = 0;
  if ( (unsigned __int16)a1 == 175 )
  {
    v4 = 0;
    v5 = a2 - 1;
    v6 = a3 + 9;
    do
    {
      if ( *(_BYTE *)(v6 + v3) > (unsigned int)*(_BYTE *)(v6 + v4) )
        v3 = v4;
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 <= 4 );
    LOWORD(v7) = v3 + 5;
  }
  else
  {
    v8 = (a1 - 133) & 0xFFFF;
    v5 = a2 - 1;
    if ( v8 <= 4 )
      goto _0804F208;
    v7 = v8 % 5 + 5;
  }
  v8 = (unsigned __int16)v7;
_0804F208:
  v9 = 0;
  if ( v5 > 0 )
  {
    v10 = 3 * v8;
    do
    {
      v11 = v9 + 1;
      sub_80516C4((v9 + 1) & 0xFF, *(&gUnknown_082165BC[v9] + v10) + 133);
      v9 = v11;
    }
    while ( v11 < v5 );
  }
  return v13;
}
