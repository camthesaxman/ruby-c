int __fastcall sub_80E97C0(__int16 a1, char a2)
{
  __int16 v2; // r5@1
  unsigned int v3; // r7@1
  char v4; // r3@1
  int *v5; // r1@1
  int v6; // r1@2
  int v7; // r2@2
  int v8; // r6@2
  _BYTE *v9; // r0@5
  char v10; // r1@8
  char v12; // [sp+0h] [bp-28h]@1
  char v13; // [sp+4h] [bp-24h]@2
  int v14; // [sp+24h] [bp-4h]@0

  v2 = a1;
  v12 = a2;
  v3 = 0;
  v4 = 0;
  v5 = &gUnknown_083DB694;
  if ( v2001084 > 0 )
  {
    do
    {
      v6 = *v5;
      v7 = v6 + 40558;
      v8 = 0;
      v13 = v4 + 1;
      if ( (signed int)*(_BYTE *)(v6 + 131) > 0 && v3 < *(_BYTE *)(v6 + 10) )
      {
        do
        {
          if ( *(_WORD *)(2 * v3 + 0x200100C) != 0xFFFF )
          {
            v9 = (_BYTE *)sub_80EB218(v7, *(_WORD *)(2 * v3 + 0x200100C), 0);
            *v9 = 0;
            v7 = (int)(v9 + 1);
          }
          v3 = (v3 + 1) & 0xFF;
          v8 = (v8 + 1) & 0xFF;
        }
        while ( v8 < v2001083 && v3 < v200100A );
      }
      v10 = 11 * v2001083;
      *(_BYTE *)v7 = -4;
      *(_BYTE *)(v7 + 1) = 19;
      *(_BYTE *)(v7 + 2) = 8 * v10;
      *(_BYTE *)(v7 + 3) = -1;
      MenuPrint(33599086, v12, v2);
      v2 += 2;
      v4 = v13;
      v5 = &gUnknown_083DB694;
    }
    while ( (unsigned __int8)v13 < (signed int)v2001084 );
  }
  return v14;
}
