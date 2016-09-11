int __fastcall sub_80AE398(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r7@1
  int v4; // r6@1
  signed int v5; // r5@1
  void *v6; // r2@1
  int v7; // r0@13
  int v8; // r5@15
  char *v9; // r4@16
  int v10; // r2@16
  char *v11; // r3@17
  int v13; // [sp+0h] [bp-54h]@13
  int v14; // [sp+50h] [bp-4h]@20

  v2 = a1;
  v3 = a2;
  v4 = 0;
  sub_80AE054();
  v5 = 0;
  v6 = &gUnknown_083C9408;
  do
  {
    if ( v3 == (*((_BYTE *)v6 + 28) & 3)
      && (!v2 && *((_BYTE *)v6 + 28) & 4
       || v2 == 1 && *((_BYTE *)v6 + 28) & 8
       || v2 == 2 && *((_BYTE *)v6 + 28) & 0x10
       || v2 == 3 && *((_BYTE *)v6 + 28) & 0x20
       || v2 == 4 && *((_BYTE *)v6 + 28) & 0x40) )
    {
      v7 = v4;
      v4 = (v4 + 1) & 0xFF;
      *((_BYTE *)&v13 + v7) = v5;
    }
    v6 = (char *)v6 + 64;
    ++v5;
  }
  while ( v5 <= 59 );
  *((_BYTE *)&v13 + v4) = -1;
  v8 = 0;
  do
  {
    v9 = (char *)&v13 + ((unsigned __int16)Random() % v4 & 0xFFFF);
    memcpy((v8 << 6) + 33785200, (char *)&gUnknown_083C9408 + 64 * (unsigned __int8)*v9, 64);
    v10 = v8 + 1;
    if ( (unsigned __int8)*v9 != 255 )
    {
      v11 = v9;
      do
      {
        *v11 = v11[1];
        ++v11;
      }
      while ( (unsigned __int8)*v11 != 255 );
    }
    v4 = (unsigned __int8)(v4 - 1);
    ++v8;
  }
  while ( v10 <= 2 );
  sub_80AE098(v2038694);
  return v14;
}
