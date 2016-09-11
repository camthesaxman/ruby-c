_BOOL4 __fastcall sub_8115A94(char *a1, unsigned __int8 a2)
{
  char *v2; // r4@1
  signed int v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r7@1
  char v6; // r8@1
  int v7; // r0@3
  __int16 v8; // r0@6
  int v9; // r1@6
  __int16 v10; // r0@8
  int v12; // [sp+0h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  LOBYTE(v4) = 0;
  LOBYTE(v5) = 0;
  memcpy(&v12, (const char *)&gUnknown_083F8ECA, 4);
  v6 = *v2;
  if ( v3 >= 0 )
  {
    if ( v3 > 1 )
    {
      if ( v3 <= 3 )
      {
        v8 = *(_WORD *)v2 / 5;
        v9 = 83886080 * v8;
        v4 = 5 * v8 & 0xFF;
        v5 = (unsigned int)(v9 + 0x4000000) >> 24;
        if ( !v9 )
          LOBYTE(v4) = 1;
      }
    }
    else
    {
      v7 = *(_WORD *)v2 % 5 << 24;
      v4 = *(_WORD *)v2 % 5 & 0xFF;
      v5 = (unsigned int)(v7 + 251658240) >> 24;
      if ( !v7 )
        LOBYTE(v4) = 5;
    }
  }
  v10 = *((_BYTE *)&v12 + v3) + *(_WORD *)v2;
  *(_WORD *)v2 = v10;
  if ( v10 < (char)v4 )
    *(_WORD *)v2 = (char)v5;
  if ( *(_WORD *)v2 > (signed int)(char)v5 )
    *(_WORD *)v2 = (char)v4;
  return *(_WORD *)v2 != v6;
}
